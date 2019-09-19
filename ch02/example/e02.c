#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    printf("请输入一个整数：");
    scanf("%d",&x);
    printf(" 整数的余数为：%d\n", x % 10);
    return 0;
}