#include <stdio.h>

int pow4(int x) {
    x = x * x * x * x;
    return x;
}

int main(void) {
    int a;

    puts("请输入整数。");
    printf("整数a:"); scanf("%d", &a);


    printf("整数的四次幂是%d。\n", pow4(a));

    return 0;
}