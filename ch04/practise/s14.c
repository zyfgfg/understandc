#include <stdio.h>

int main(void) {
    int i = 0;
    int sum = 0;
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    for (i = 0; i <= num; i++) {



        printf("%d", i % 10);
    }
printf("\n");
    return 0;
}
