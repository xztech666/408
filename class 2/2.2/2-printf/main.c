#include <stdio.h>
// 联系printf
int main()
{
    int age = 18;
    printf("hello %s,you are %d years old\n", "xz", age);
    int i = 10;
    float f = 96.3;
    // %3d: 宽度为3,不足3位前面补0  %5.2f: 宽度为5,小数点后保留2位
    printf("student number is %3d,student score is %5.2f\n",i, f); // 浮点数的近似存储,后面会讲,96.300003
    printf("student number is %-3d,student score is %5.2f\n",i, f); // 默认右对齐,加一个负号可以左对齐

    i=100;
    f = 98.21;
    printf("student number is %3d,student score is %5.2f\n",i, f);

    return 0;
}
