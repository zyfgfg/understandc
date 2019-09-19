#include<stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    printf("请输入一个整数：");
    scanf("%d", &x);

    if (x % 3 ==0)
    {printf("该数能被三整除。\n");}
    else if (x % 3 == 1) {
        printf("余数为1。\n")
        ;
    } else {printf("余数为2。\n");}

    return 0;
}