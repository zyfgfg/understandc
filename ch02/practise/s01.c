#include<stdio.h>
int main(void) {
    int x, y;
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);
    printf("x的值是y的%.2f%%\n", (double)x / y	 *100); return 0;
}