#include <stdio.h>
// 指针与一维数组的传递
// 数组名作为实参传递给子函数时,时弱化为指针的
void change(char *p)
{
    *p = 'H';
    p[1] = 'E'; // *(p+1)等价
    *(p+2) = 'L';
}

int main() {
    char c[10]="hello";
    change(c);
    puts(c);

    return 0;
}
