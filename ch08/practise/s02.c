#include<stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))
 int main(int argc, char const *argv[])
{
	int a,b,c,d;
printf("输入数据：");scanf("%d",&a);
printf("输入数据：");scanf("%d",&b);
printf("输入数据：");scanf("%d",&c);
printf("输入数据：");scanf("%d",&d);
max(max(a, b), max(c, d));

printf("四个数的最大值是：%d\n",max(max(max(a, b), c), d));
	return 0;
}