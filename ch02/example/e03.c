#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    int y;
    printf("请输入一个整数：");
    scanf("%d", &x);
    printf("请输入另一个整数：");
    scanf("%d", &y);

    printf(" 整数的平均数为：%f\n", (double)(x + y) / 2);
    return 0;
}