#include <stdio.h>

int main(void) {
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF) {
        putchar(ch);
        if (ch == '\n') {
            count ++;
        }
    }

    printf("标准输入总共出现了%d行\n", count);

    return 0;
}