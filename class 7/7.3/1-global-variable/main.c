#include <stdio.h>

int i = 10;// 全局变量,不建议使用

void print(int a)
{
    printf("I am print i=%d\n", i);
}
void print_(int i) // 形参可以看作局部变量
{
    printf("I am print_ i=%d\n", i);
}
int main() {
    int i = 20;// 局部变量
    printf("I am main i=%d\n", i);
    print(5);
    print_(5);
    /*
    {
        int j = 5;
    } 局部变量只在离自己最近的大括号内有效
    printf("I am main j=%d\n", j);
    */

    return 0;
}
