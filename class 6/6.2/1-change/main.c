#include <stdio.h>
// 在子函数内去改变主函数中某个变量的值
void change(int j)
{
    j = 5;
}
int main() {
    int i = 10;
    printf("before change i=%d\n", i);
    change(i); // C语言中函数的参数是值传递，即函数内对参数的修改不会影响函数外
    printf("after change i=%d", i);

    return 0;
}
