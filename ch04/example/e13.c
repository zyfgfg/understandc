#include <stdio.h>
int main(void) {
    int input,i;
printf("请输入一个整数\n");    scanf("%d", &input);
    for (i = 10; i <= input; i++) {
printf("余数为%d\n", input % 10);}
}