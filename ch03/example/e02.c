#include<stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    printf("请输入一个整数：");
    scanf("%d", &x);

    if (x / 2 == 0)
    {puts("该整数为偶数");}
    else {
        puts("该整数为奇数")
        ;
    }

    return 0;
}