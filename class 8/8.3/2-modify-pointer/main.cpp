#include <stdio.h>

void modify_pointer(int *&p, int *&q)
{
    p=q;
}

// 子函数中修改主函数的一级指针，p指向q，即p=q，p和q指向同一个地址，所以打印出来的是10
int main() {
    int *p=NULL;
    int i=10;
    int *q=&i;
    modify_pointer(p,q);
    printf("after modify_pointer p=%d\n",*p);

    return 0;
}
