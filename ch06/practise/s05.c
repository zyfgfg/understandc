#include <stdio.h>

int sumup(int n) {
    int sum=0;
    for (int i = 0; i <= n; i++) 
        sum += i;
    

    return sum;
}

int main(void) {
    int a;

    puts("请输入整数。");
    printf("整数a:"); scanf("%d", &a);


    printf("整数的整数和是%d。\n", sumup(a));

    return 0;
}