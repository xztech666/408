#include <stdio.h>

struct student {
    int num;
    char name[20];
    char sex;
};

// 结构体指针
int main() {
    struct student s={100, "zhangsan", 'm'};
    struct student sarr[3]={
        {101, "lisi", 'f'},
        {102, "wangwu", 'm'},
        {103, "zhaoliu", 'f'}
    };
    struct student *p; // 指向结构体变量的指针
    p=&s; // 指向结构体变量
    printf("num=%d, name=%s, sex=%c\n", p->num, p->name, p->sex); // 首选 方法一
//    printf("num=%d, name=%s, sex=%c\n", (*p).num, (*p).name, (*p).sex); // 方法二
    p=sarr; // p=&sarr[0];
    printf("num=%d, name=%s, sex=%c\n", p->num, p->name, p->sex);
    printf("-------------------------------\n");
    p++;
    printf("num=%d, name=%s, sex=%c\n", p->num, p->name, p->sex);

    return 0;
}
