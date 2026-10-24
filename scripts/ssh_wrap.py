#!/usr/bin/env python3
"""ssh_wrap.py - GIT_SSH 包装器：无 ssh 二进制环境下用 paramiko 桥接 git 传输
用法: GIT_SSH=/home/z/my-project/scripts/ssh_wrap.py git push origin main
"""
import sys, os, threading, paramiko

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
    key = paramiko.Ed25519Key.from_private_key_file(
        os.path.expanduser('~/.ssh/id_ed25519'))
    c = paramiko.SSHClient()
    c.set_missing_host_key_policy(paramiko.AutoAddPolicy())
    c.connect(host, port=port, username=user, pkey=key, timeout=30)
    chan = c.get_transport().open_session()
    chan.exec_command(cmd)

    def pump(reader, dst):
        while True:
            data = reader()
            if not data:
                break
            dst.buffer.write(data)
            dst.buffer.flush()

    t1 = threading.Thread(target=pump, args=(chan.recv, sys.stdout), daemon=True)
    t2 = threading.Thread(target=pump, args=(lambda: chan.recv_stderr(32768), sys.stderr), daemon=True)
    t1.start(); t2.start()

    def pump_in():
        while True:
            data = sys.stdin.buffer.read1(32768)
            if not data:
                break
            chan.sendall(data)
    try:
        pump_in()
    except Exception:
        pass
    chan.shutdown_write()
    while t1.is_alive() or t2.is_alive():
        t1.join(1)
    rc = chan.recv_exit_status()
    c.close()
    sys.exit(rc)

if __name__ == '__main__':
    main()
