#include <stdio.h>

#define NUMBER 5 /*学生人数*/

int main(void)
{
    int i, a=0;
    int tensu[NUMBER];/*NUMBER个学生的分数*/
    int sum = 0;

    printf("请输入%d名学生的分数。\n", NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("%-2d号:", i + 1);
        scanf("%d", &tensu[i]);
        
    }
for(i=0;i<NUMBER;i++)
    {if(tensu[i]>=60){
        
        a+=1;
    printf("及格分数：%d\n", tensu[i]);
}}
       printf("一共有%d人及格\n",a);

    return 0;
}