#!/usr/bin/env python3
"""ssh_wrap.py - GIT_SSH 包装器：无 ssh 二进制环境下用 paramiko 桥接 git 传输
用法: GIT_SSH_COMMAND="python3 /home/z/my-project/scripts/ssh_wrap.py" git push origin main
r17 加固: 泵线程 try/except（线程死亡不再挂起主流程）、transport keepalive、
         阶段诊断 -> stderr、整体看门狗（默认 600s 强制退出）。
"""
import sys, os, threading, time, paramiko

DEADLINE = time.time() + int(os.environ.get('SSH_WRAP_TIMEOUT', '600'))
DIAG = os.environ.get('SSH_WRAP_DIAG', '1') == '1'

def dlog(m):
    if DIAG:
        print(f'[ssh_wrap {time.strftime("%H:%M:%S")}] {m}', file=sys.stderr)

def main():
    args = sys.argv[1:]
    port, userhost, cmd = 22, None, None
    i = 0
    while i < len(args):
        a = args[i]
        if a == '-p':
            port = int(args[i + 1]); i += 2
        elif a.startswith('-'):
            i += 1
        else:
            userhost = a; i += 1
            cmd = ' '.join(args[i:]); break
    if userhost is None:
        sys.exit('ssh_wrap: no user@host')
    user, host = userhost.split('@', 1) if '@' in userhost else ('git', userhost)
    dlog(f'connect {user}@{host}:{port} cmd={cmd[:60]}')
    key = paramiko.Ed25519Key.from_private_key_file(
        os.path.expanduser('~/.ssh/id_ed25519'))
    c = paramiko.SSHClient()
    c.set_missing_host_key_policy(paramiko.AutoAddPolicy())
    c.connect(host, port=port, username=user, pkey=key, timeout=30,
              banner_timeout=30, auth_timeout=30)
    tr = c.get_transport()
    tr.set_keepalive(15)
    chan = tr.open_session()
    chan.settimeout(5)   # 短超时：泵线程可周期检查 deadline（timeout 异常内部消化）
    chan.exec_command(cmd)
    dlog('exec ok, pumping')

    state = {'stdout_b': 0, 'stderr_b': 0, 'stdin_b': 0}

    import socket
    def pump(reader, dst, tag):
        while time.time() < DEADLINE:
            try:
                data = reader()
            except socket.timeout:
                continue          # 短超时轮询，非致命
            except EOFError:
                dlog(f'{tag}: eof-except'); break
            except Exception as e:
                dlog(f'{tag}: EXC {type(e).__name__}: {e}'); break
            if not data:
                dlog(f'{tag}: eof @ {state[tag + "_b"]}B'); break
            state[tag + '_b'] += len(data)
            try:
                dst.buffer.write(data)
                dst.buffer.flush()
            except Exception as e:
                dlog(f'{tag}: sink EXC {type(e).__name__}: {e}'); break

    t1 = threading.Thread(target=pump, args=(lambda: chan.recv(32768), sys.stdout, 'stdout'), daemon=True)
    t2 = threading.Thread(target=pump,
                          args=(lambda: chan.recv_stderr(32768), sys.stderr, 'stderr'), daemon=True)
    t1.start(); t2.start()

    def pump_in():
        try:
            while True:
                if time.time() > DEADLINE:
                    dlog('stdin: deadline'); break
                data = sys.stdin.buffer.read1(32768)
                if not data:
                    dlog(f'stdin: eof @ {state["stdin_b"]}B'); break
                state['stdin_b'] += len(data)
                chan.sendall(data)
        except Exception as e:
            dlog(f'stdin: EXC {type(e).__name__}: {e}')
    t_in = threading.Thread(target=pump_in, daemon=True)
    t_in.start()
    # stdin 泵线程化：git 可能在收到 stdout refs 前不写 stdin，三泵并行防互等
    while t_in.is_alive():
        if time.time() > DEADLINE:
            dlog('stdin join: deadline'); break
        t_in.join(1)
    try:
        chan.shutdown_write()
    except Exception:
        pass
    while t1.is_alive() or t2.is_alive():
        if time.time() > DEADLINE:
            dlog('main: deadline, abort'); os._exit(255)
        t1.join(1); t2.join(1)
    try:
        rc = chan.recv_exit_status()
    except Exception as e:
        dlog(f'exit status EXC {e}'); rc = 255
    dlog(f'done rc={rc} tx={state["stdout_b"]}B rx={state["stdin_b"]}B err={state["stderr_b"]}B')
    c.close()
    sys.exit(rc)

if __name__ == '__main__':
    main()
