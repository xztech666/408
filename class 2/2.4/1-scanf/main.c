#include <stdio.h>

int main() {
    int i;
    char c;
    float f;
    // scanf会卡住,因为缓冲区中是空的
    // scanf用来从标准输入读取数据,把输入的内容,需要放到指向的变量中,必须要有一个地址,用&来获取地址
    scanf("%d", &i);
    printf("i = %d\n", i);

    // 清除标准缓冲区,不然的话会留下上次输入的\n
//    fflush(stdin);
//    scanf("%c", &c);
//    printf("c = %c\n", c);

    scanf("%f", &f);
    printf("f = %f\n", f);

    return 0;
}
