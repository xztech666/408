#include <stdio.h>
// 强制类型转换
int main() {
    int i = 5;
    float f = i / 2; // 这里会整形计算,因为左右操作数都是整数，结果是整数
    float g = (float)i / 2; // 强制类型转换, 结果是浮点数
    printf("%f\n", f);
    printf("%f\n", g);

    return 0;
}
