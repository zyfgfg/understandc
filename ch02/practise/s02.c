#include<stdio.h>
int main(void) {
    int x, y;
    printf("整数a："); scanf("%d", &x);
    printf("整数b："); scanf("%d", &y);
    printf("它们的和是%d,积是%d\n", x + y, x * y);
    return 0;
}