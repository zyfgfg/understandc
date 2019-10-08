#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int ten(int a, int b) {
    int c[128];
int j;
    if (b == 0) { main();}
    else {
        for (int i = 1; i < b; i++) {
            printf("请输入猜的数字："); scanf("%d", &c[i]);

            if (c[i] < a) {printf("没有猜中,小了\n");}

            if (c[i] > a) {printf("没有猜中,大了\n");}

            if (c[i] == a) {printf("猜中了\n");j=i;break; }
        }
for (int i = 0; i < j; i++) {
        	printf(" %d   %d   %d   \n", i+1, c[i+1], c[i+1] - a);}
        
    }

}

int main(void) {
    int a, b, c, d;
    printf("请选择难度等级：\n1.0~9\n2.0~99\n3.0~999\n4.0~9999\n");
    scanf("%d", &d);

    printf("请输入想要猜的次数："); scanf("%d", &b);

    switch (d) {
        srand((unsigned)time(NULL));
        a = rand();

    case 1: c = a % 10; ten(c, b); break;

    case 2: c = a % 100; ten(c, b); break;

    case 3: c = a % 1000; ten(c, b); break;

    case 4: c = a % 10000; ten(c, b); break;

    default: printf("输入错误。\n"); break;
    }
}
