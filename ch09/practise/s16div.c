#include<stdio.h>
// extern int x;
// extern int y;
int s16div(int x,int y)
{
    
puts("当前是除法");
    printf("整数A：");
    scanf("%d", &x);
    printf("整数B：");
    scanf("%d", &y);

    printf("%d除以%d\n",x,y);
    printf("结果是%d\n",x/y);
    return (x/y);
}