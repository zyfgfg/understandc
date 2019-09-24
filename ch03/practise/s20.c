#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(int argc, char const *argv[]) {
    int x, y,retry;
    srand((unsigned)time(NULL));
    y = (rand() % 3) + 1;
    

    //srand((unsigned)time(NULL));

    //printf("", rand(), &y);
    do {
        srand((unsigned)time(NULL));
    y = (rand() % 3) + 1;
    
        puts("请输入：1.剪刀2.石头3.布");
        scanf("%d", &x);

        if (x == 3 && y  == 1) {
            puts("你输入的是布。\n计算机输入的是剪刀。\n计算机赢");
        }

        else if (x == 3 && y  == 2) {
            puts("你输入的是布。\n计算机输入的是石头。\n你赢");
        }

        else if (x == 1 && y  == 2) {
            puts("你输入的是剪刀。\n计算机输入的是石头。\n计算机赢");
        }

        else if (x == 1 && y  == 3) {
            puts("你输入的是剪刀。\n计算机输入的是布。\n你赢");
        }

        else if (x == 2 && y  == 1) { puts("你输入的是石头。\n计算机输入的是剪刀\n你赢"); }

        else if (x == 2 && y  == 3) { puts("你输入的是石头。\n计算机输入的是布\n计算机赢"); }

        else if (x == y) { puts("平局。"); }

        else {
            puts("错误");
        } 
        printf("是否继续？【YES……0/NO……1】:"); scanf("%d", &retry);

    } while (retry != 1);

    return 0;
}




