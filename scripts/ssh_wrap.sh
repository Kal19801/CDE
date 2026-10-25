#!/bin/bash
exec python3 "$(dirname "$0")/ssh_wrap.py" "$@"
