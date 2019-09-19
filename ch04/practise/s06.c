#include <stdio.h>

int main(void) {
    int i, no;
    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 0;

    while (i < no-2) {
        printf("%d\n ", i += 2);
    }


    return 0;
}
