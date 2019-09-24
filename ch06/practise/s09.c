#include <stdio.h>

void rev_intary(int v[], int n) {
    for (int i = 0; i < n / 2 ; i++) {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i ] = temp;
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
    int ary[] = {1, 2, 3, 4, 5, 6};

    printf("原数组：");
    print_array(ary, 6);
    rev_intary(ary, 6);

    printf("倒序后数组：\n");
    print_array(ary, 6);

    return 0;
}