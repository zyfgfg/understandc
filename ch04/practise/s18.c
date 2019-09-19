#include <stdio.h>

int main(void) {
    int n ;

    printf("请输入一个整数"); scanf("%d", &n);

    for (int i = 1 ; i <= n; i++) {


        putchar('*');

        if (i % 5 == 0 || i == n) {putchar('\n');}
    }


    printf("\n");
    return 0;
}
