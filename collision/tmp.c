#include <stdio.h>

int main(int argc, char *argv[]) {
    char* str = argv[1];
    int* num = (int*)str;
    int i;
    int res = 0;
    for (i = 0; i < 5; i++) {
        res += num[i];
    }
    printf("%d\n", res);
    return 0;
}