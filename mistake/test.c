#define XORKEY 1
void xor (char *s, int len) {
    int i;
    for (i = 0; i < len; i++)
    {
        s[i] ^= XORKEY;
    }
}

int main() {
    char* test_char = "test";
    xor(test_char,3);
    printf("%s",test_char);
    return 0;
}