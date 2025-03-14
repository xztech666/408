#include <stdio.h>
// C++引用
// 在子函数中修改主函数的普通变量的值

void modify_num(int &num) // 形参中写&, 表示引用
{
    num = num + 10;
}

int main() {
    int a = 10;
    modify_num(a);
    printf("after modify_numa = %d\n", a);

    return 0;
}
