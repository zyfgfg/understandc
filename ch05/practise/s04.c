#include <stdio.h>

int main(void)
{
    int i,temput;
    int a[5] = {0,0,36, 23, 17};
    int b[5];

    for (i = 0; i < 5; i++)
        b[i] = a[i];
    puts("  a   b");
    puts("---------");

    for (i = 0; i < 5; i++)
        printf("%4d%4d\n", a[i], b[i]);

    return 0;
}