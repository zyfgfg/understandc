#include<stdio.h>
#define min(x,y)(x>y?x-y:y-x)
 int main(int argc, char const *argv[])
{
	int x,y;
printf("输入数据：");scanf("%d",&x);
printf("输入数据：");scanf("%d",&y);
printf("两个数的差是：%d\n",min(x,y));
	return 0;
}