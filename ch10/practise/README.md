#s01.c
编写函数adjust_point，如果n指向的值小于0,就将其改为0:如果值大于100,就将其改为100(如果是0〜100的值，则不修改)。

void adjust_point(int *n){/*...*/}
#s02.c
编写如下函数，将*y年*m月*d日的日期，修改为其前一天或后一天的曰期。

void decrement_date(int *y,int *m,int *d){/*...*/}
void increment_date(int *y,int *m,int *d){/*...*/}
注意计算时要考虑到闰年的问题。
#s03.c
编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。
void sort3(int *n1,int *n2,int *n3){/*...*/}
#s04.c
编写如下set_idx函数，接收元素类型为int型、元素个数为n的数组，并为所有元素赋上和下标相同的值。
void set_idx(int *v,int n){/*•••*/}
#s05.c
如果用ary_set(&a[2],2,99)调用代码清单10-11中的ary_set函数会怎样呢?请试着执行一下并探讨其结果。
