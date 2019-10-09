#s01.c
请定义一个函数式宏diff(x,y)，返回x、y二值之差。
#s02.c
现定义如下函数式宏，其功能为返回x、y中的较大值。

#define max(x,y) (((x)>(y))?(x):(y))
而下面两个使用了该宏的表达式的功能为计算a、b、c、d中的最大值。

max(max(a, b), max(c, d))
max(max(max(a, b), c), d)
请显示并观察它们是如何展开的。
#s03.c
定义一个函数式宏swap(type，a，b)以使type型的两值互换。

例如:假设int型变量x、y的值分别为5、10,那么调用swap(int,x,y)后，x、y中应分别保存10、5。
#s04.c
创建一个程序，对代码清单8-5进行改写，依然使用冒泡排序法，但排序时要按照从前往后的顺序，而非从后往前(这是针对上一节内容的练习)。
#s05.c
请在程序中定义表示性别、季节等的枚举类型，并有效使用它们。
#s06.c
不使用递归调用的方式来实现函数factorial。
#s07.c
编写如下函数，求出从n个不同整数中取出r个整数的组合数Crn。

int combination(int n,int r){/*...*/}
Crn的定义如下。 Crn=Cr-1n-1+Crn-1（且C0n=Cnn=1、C1n=n）
#s08.c
创建一个函数，使用辗转相除法求两个整数值x和y的最大公约数。

int gcd(int x, int y){/*...*/}
#s09.c
创建一个程序，计算标准输入中出现的行数。
#s10.c
改写代码清单8-10的程序，将数字字符的出现次数用并排的*表示。注意和代码清单5-12以及练习5-9的显示一样。