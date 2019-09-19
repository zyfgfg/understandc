//求长方形的面积
#include<stdio.h>
int main(void) {
    int height, width;
    puts("求长方形的面积");
    printf("输入长："); scanf("%d", &height);
    printf("输入宽："); scanf("%d", &width);
    printf("长方形面积为:%d\n", width * height);

return 0;
}