#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 堆和栈的差异

char *print_stack()  // 栈空间在函数结束后释放
{
    char c[100] = "I am print_stack function";
    char *p;
    p = c;
    puts(p);
    return p;
}

char *print_malloc() // 堆空间在整个进程中一直有效, 不会因为函数结束而释放
{
    char *p;
    p = (char *)malloc(100);
    strcpy(p, "I am print_malloc function");
    puts(p);
    return p;
}
int main() {
    char *p;
    p = print_stack();
    puts(p);
    p = print_malloc();
    puts(p);
    free(p); // 只有free时,堆空间才会释放

    return 0;
}
