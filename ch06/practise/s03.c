#include <stdio.h>

int cube(int x) {
    x = x * x * x;
    return x;
}

int main(void) {
    int a;

    puts("请输入整数。");
    printf("整数a:"); scanf("%d", &a);


    printf("整数的立方是%d。\n", cube(a));

    return 0;
}