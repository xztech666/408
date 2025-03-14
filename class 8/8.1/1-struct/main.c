#include <stdio.h>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
}; // 结构体类型声明,注意最后要加分号

int main() {
    struct student stu={1001, "zhangsan", 'm', 18, 90.5, "beijing"};
    // 结构体输出必须单独访问结构体成员
    printf("num=%d name=%s sex=%c age=%d score=%f addr=%s\n", stu.num, stu.name, stu.sex, stu.age, stu.score, stu.addr);
//    scanf("%d %s %c %d %f %s", &stu.num, stu.name, &stu.sex, &stu.age, &stu.score, stu.addr);
//    printf("num=%d name=%s sex=%c age=%d score=%f addr=%s\n", stu.num, stu.name, stu.sex, stu.age, stu.score, stu.addr);

    struct student sarr[3]; // 结构体数组
    for (int i = 0; i < 3; i++) {
        scanf("%d %s %c %d %f %s", &sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, sarr[i].addr);
    }
    for (int i = 0; i < 3; i++) {
        printf("num=%d name=%s sex=%c age=%d score=%f addr=%s\n", sarr[i].num, sarr[i].name, sarr[i].sex, sarr[i].age, sarr[i].score, sarr[i].addr);
    }

    return 0;
}
