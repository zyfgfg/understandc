#include<stdio.h>
int main(void) {
    int x, y;

    printf("整数A：");
    scanf("%d", &x);
    printf("整数B：");
    scanf("%d", &y);

    if (x - y <= 10 & x - y >= -10 || y - x <= 10 & y - x >= -10) {
        puts("它们的差小于等于10\n");
    }

    else  {
        puts("它们的差大于等于11\n");
    }

    return 0;
}