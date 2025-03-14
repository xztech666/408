#include <stdio.h>

typedef struct student{
    int num;
    char name[20];
    char sex;
}stu,*pstu;
/*
 * stu等价于struct student
 * pstu等价于struct student *
 */

typedef int INGETER;  // 定义一个别名,特定地方使用

// typedef的使用,起别名
int main() {
    stu s={1001,"zhangsan",'m'};
//    stu *ps=&s; // 等价于 stu *ps=&s, 定义了一个结构体指针变量
    pstu p=&s;
    INGETER num=10;
    printf("num=%d,p->num=%d",num,p->num);

    return 0;
}
