#include<stdio.h>
int main(void) {
    int x, y, z,t;

    printf("整数A：");
    scanf("%d", &x);
    printf("整数B：");
    scanf("%d", &y);
    printf("整数C：");
    scanf("%d", &z);
    printf("整数D：");
    scanf("%d", &t);

    if (x>y&&x>z&&x>t) {
        printf("最大值为：%d\n", x);
    } else if (y>x&&y>t&&y>z) {
        printf("最大值为：%d\n", y);
    } else if (z>x&&z>t&&z>y) {
        printf("最大值为：%d\n", z);
    }
else if (t>y&&t>z&&t>x) {
        printf("最大值为：%d\n", z);
    }
    return 0;
}