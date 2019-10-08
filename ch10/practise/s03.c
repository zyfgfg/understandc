#include<stdio.h>
void swap(int *x, int *y) {
    int swap = *x;
    *x = *y;
    swap = *y;
}
void sort3(int *n1, int *n2, int *n3) {
    if (*n1 < *n2) {swap(*n1, *n2);}
    if (*n2 < *n3) {swap(*n2, *n3);}
    if (*n1 < *n3) {swap(*n1, *n3);}



}
int main(int argc, char const *argv[]) {
    int n1, n2, n3;
    printf("请输入一个整数："); scanf("%d", &n1);
    printf("请输入一个整数："); scanf("%d", &n2);
    printf("请输入一个整数："); scanf("%d", &n3);

printf("整数升序为：%d,%d,%d\n",n1,n2,n3);
    return 0;
}