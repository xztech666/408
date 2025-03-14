#include <stdio.h>

// scanf一次读多种数据类型
int main() {
    int i, ret;
    float f;
    char c;

    // 要在%c前面加上一个空格，否则会报错,原因是scanf函数会吃掉空格，而%c不会
    ret = scanf("%d %c%f", &i, &c, &f); // ret: 是指示scanf函数读取了多少个数据
    printf("ret=%d, i=%d, c=%c, f=%5.2f\n", ret, i, c, f);

    return 0;
}
