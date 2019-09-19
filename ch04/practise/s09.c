#include <stdio.h>

int main(void) {
    int no, i=1;

    printf("请输入一个正数：");
    scanf("%d", &no);

    while (i <= no) {
        if (i % 2) { putchar('+'); }

        else {
            putchar('-');
        }

        i++;
    }

    if (no > 0) {printf("\n");}

    return 0;
}