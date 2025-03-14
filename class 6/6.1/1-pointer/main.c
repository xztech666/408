#include <stdio.h>

int main() {
    int i=5;
    // 指针变量的初始化是某个变量取地址来赋值,不能随机写一个数
    int *i_pointer; // 定义一个指针变量
    i_pointer=&i;
    printf("%d\n", i); // 直接访问
    printf("%d\n", *i_pointer); // 通过指针访问,间接访问
    return 0;
}
