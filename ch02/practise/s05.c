#include<stdio.h>
int main(void) {
    int x, y;
    printf("整数a："); scanf("%d", &x);
    printf("整数b："); scanf("%d", &y);
    printf("a的值是b的%f%%\n", (double)x / y	); return 0;
}