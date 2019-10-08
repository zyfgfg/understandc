#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))/*计算平方*/

/*表示点的坐标的结构体*/
typedef struct {
    double x; /*X坐标*/
    double y; /*Y坐标*/
} Point;

/*表示汽车的结构体*/
typedef struct {
    Point pt;    /*当前位置*/
    double fuel; /*剩余燃料*/
} Car;

/*返回点pa和点pb之间的距离*/
double distance_of(Point pa, Point pb) {
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

/*显示汽车的当前位置和剩余燃料*/
void put_info(Car c) {
    printf("(%.2f,%.2f)\n", c.pt.x, c.pt.y);
    printf("%.2f\n", c.fuel);
}

/*使c指向的汽车向目标坐标dest行驶*/
int move(Car *c, Point dest) {
    double d = distance_of(c->pt, dest);

    if (d > c->fuel) {
        return 0;
    }

    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int main(void) {
    Car mycar = {{0.0, 0.0}, 90.0};

    while (1) {
        int select;
        int type;
        Point dest;
        put_info(mycar);
        printf("开动汽车吗【YES---1/NO--0】：");
        scanf("%d", &select);
        double x, y;

        if (select != 1) { break; }

        printf("请输入移动方式【目的地坐标---1/行驶距离--0】：");

        scanf("%d", &type);

        if (type == 1) {
            printf("目的地的X坐标："); scanf("%lf", &dest.x);
            printf("目的地的Y坐标："); scanf("%lf", &dest.y);
        } else if (type == 0) {
            printf("移动的X坐标："); scanf("%lf", &x);
            printf("移动的Y坐标："); scanf("%lf", &y);
            dest.x = mycar.pt.x + x;
            dest.y = mycar.pt.y + x;
        } else {
            printf("请输入正确的移动方式！\n");
            continue;
        }

        if (!move(&mycar, dest)) {
            puts("\a燃料不足无法行驶。");
        }


    }

    return 0;
}