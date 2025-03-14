#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size; // size表示要申请多大的内存空间
    char *p; // void*类型的指针不能偏移
    scanf("%d", &size); // 输入要申请内存的大小
    // malloc函数返回的是无类型指针，所以要强制类型转换
    p = (char *)malloc(size);
    strcpy(p,"malloc success");
    puts(p);
    free(p); // 释放内存
    printf("free success");

    return 0;
}
