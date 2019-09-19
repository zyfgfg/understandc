#include<stdio.h>
 
int main(void)
{
    int n;     // 正方形的边长
    int i, j; // 循环变量
    printf("输入边长" );
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j == 0 || j == n-1 || i == 0 || i == n-1)
            {
                printf("* ");
            }
            else
            {
                printf("  "); 
            } 
        }
        printf("\n");
    } 
    return 0;
}