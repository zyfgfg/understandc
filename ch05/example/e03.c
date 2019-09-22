#include <stdio.h>

int main(void)
{
    int a=0;
    int X=(a++,a++);
int b=0;
int y=(++b,++b);
int c=0;
    int z=(c--,c--);
int d=0;
int t=(--d,--d);
printf ("%d\n,%d\n,%d\n,%d\n,",X,y,z,t);
    

    return 0;
}