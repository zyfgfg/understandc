#include<stdio.h>
// int x;
// int y;
int s15sub(int x,int y )
{
    
puts("当前是减法");
    printf("整数A：");
    scanf("%d", &x);
    printf("整数B：");
    scanf("%d", &y);

    printf("%d减%d\n",x,y);
    printf("结果是%d\n",x-y);
    return (x-y);
}