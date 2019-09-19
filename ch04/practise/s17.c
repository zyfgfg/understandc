#include <stdio.h>

int main(void) {
    int n ;

    printf("请输入一个整数"); scanf("%d", &n);

    for (int i = 1 ; i <= n; i++) {
         {

            printf(" %d的二次方是%d\n", i,i*i);
        }
    }


    printf("\n");
    return 0;
}
