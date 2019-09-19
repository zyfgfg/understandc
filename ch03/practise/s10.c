#include<stdio.h>
int main(void) {
    int x, y, z;

    printf("整数A：");
    scanf("%d", &x);
    printf("整数B：");
    scanf("%d", &y);
    printf("整数C：");
    scanf("%d", &z);

    if (x == y && y == z) {
        printf("三个值都相等。\n");
    } else if (y == x || y == z || z == x) {
        printf("有两个值相等。\n");
    } else {
        printf("三个值各不相同。\n");
    }


return 0;
}