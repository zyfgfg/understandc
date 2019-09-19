#include<stdio.h>
int main(int argc, char const *argv[]) {
    int x, y;
    printf("请输入一个整数：");
    scanf("%d", &x);
    printf("请输入一个整数：");
    scanf("%d", &y);

    if (x > y)
    {printf("较大的数是：%d\n",x);}
    else if (x < y) {
        printf("较大的数是：%d\n",y)
        ;
    } else {printf("两个数相等。\n");}

    return 0;
}