#include <stdio.h>

struct student_type1{
    double score; // 8字节
    short age; // 2字节
};

struct student_type2{
    double score;
    char height;
    short age;
};

struct student_type3{
    int height;
    char sex;
    short age;
};

// 结构体对齐
int main() {
    struct student_type1 stu1;
    struct student_type2 stu2;
    struct student_type3 stu3;

    printf("student_type1 size: %d\n", sizeof(stu1));
    printf("student_type2 size: %d\n", sizeof(stu2));
    printf("student_type3 size: %d\n", sizeof(stu3));

    return 0;
}
