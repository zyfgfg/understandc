#include<stdio.h>
int main(void) {
    int x, y;

    printf("整数1：");
    scanf("%d", &x);
    printf("整数2：");
    scanf("%d", &y);

    if (x > y) {
        printf("它们的差是%d。\n", x - y);
    } else if (x < y) {
        printf("它们的差是%d。\n", y - x);
    }

    return 0;
}