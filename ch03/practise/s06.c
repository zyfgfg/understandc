#include<stdio.h>
int main(void) {
    int x, y, z;

    printf("整数A：");
    scanf("%d", &x);
    printf("整数B：");
    scanf("%d", &y);
    printf("整数C：");
    scanf("%d", &z);

    if (x < y && x < z) {
        printf("最小值为：%d\n", x);
    } else if (y < x && y < z) {
        printf("最小值为：%d\n", y);
    } else if (z < x && z < y) {
        printf("最小值为：%d\n", z);
    }

    return 0;
}