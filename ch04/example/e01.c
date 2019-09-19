#include <stdio.h>
int main(void) {
    int input;
     printf("请输入一个整数\n");
    scanf("%d\n", &input);
    int isrepeat;

    do {
        if (input % 2 == 0)
        {printf("输入的是偶数\n");}
        else
        {printf("输入的是奇数\n");}

        printf("好了吗\n");
        scanf("%d", &isrepeat);
    } while (isrepeat != 0);

    printf("终于好了！！\n");
    return 0;
}