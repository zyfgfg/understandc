#s01.c
创建一个函数，返回两个int型整数中较小一数的值。

int min2(int a,int b){/*...*/}
为了确认函数的动作，还需要大家创建一个合适的main函数来组成一段完整的程序（之后的练习也是如此）。
#s02.c
创建一个函数，返回三个int型整数中的最小值。

int min3(int a,int b,int c){/*...*/}
#s03.c
创建一个函数，返回int型整数的立方。

int cube(int x){/*...*/}
#s04.c
使用代码清单6-3中的sqr函数创建另一个函数，返回int型整数的四次幂。

int pow4(int x){/*...*/}
#s05.c
创建一个函数，返回1到n之间所有整数的和。

int sumup(int n){/*...*/}
#s06.c
创建一个函数，连续发10次响铃。

void alert(int n) { /*...*/ }
#s07.c
创建一个函数，在屏幕上显示出“你好。”并换行。

void hello(void){/*...*/}
#s08.c
创建一个函数，返回元素个数为 n 的 int 型数组 v 中的最小值。

int min_of(const int v[]，int n){/*...*/}
#s09.c
创建一个函数，对元素个数为 n 的 int 型数组 v 进行倒序排列。

void rev_intary{int v[],int n){/*...*/)
#s10.c
创建一个函数，对元素个数为 n 的 int 型数组 v2 进行倒序排列，并将其结果保存在数组 v1 中。

void intary_rcpy(int v1[],const int v2[],int n){/*...*/}
#s11.c
创建一个函数search_idx，将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，返回和key相等的元素的个数。

int search_idx(const int v[] int idx[],int key,int n);
例如，如果v中所接收的数组的元素是{1,7,5,7,2,4,7}，key为7的话，{1,3,6}就会被存储在id中x，并返回3。
#s12.c
创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中。

void mat_mul(const int a[4][3],const int b[3][4],int c[3][3]){/*...*/}
#s13.c
改写代码清单6-16的程序，将两次考试的分数存储在三维数组中。
#s14.c
编写一段程序，为double型数组的所有元素分配静态存储期，并确认它们都被初始化为0.0
#s15.c
创建函数put_count，显示被调用的次数（如下显示的是调用3次函数put_count的运行结果）

void put_count() {/*...*/}
put_count:第一次
put_count:第二次
put_count:第三次