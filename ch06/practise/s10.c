#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n) {

for (int i = 0; i < n  ; i++) {
            v1[i] = v2[n - 1 - i];
}
}
void print_array(const int v[], int n) {
    printf("{ ");

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("}\n");
}

int main(void) {
    int ary[6] = {1, 2, 3, 4, 5, 6};
    int a[6] = {0};
    printf("原数组：");
    print_array(ary, 6);
    intary_rcpy(a, ary, 6);

    printf("倒序后数组：\n");
    print_array(a, 6);

    return 0;
}