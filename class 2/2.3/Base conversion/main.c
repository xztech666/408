#include <stdio.h>

int main() {
//    int i = 123; //十进制
    int i = 0173;  //八进制
//    int i = 0x7b; //十六进制

    printf("%d\n", i); //十进制输出
    printf("%o\n", i); //八进制输出
    printf("%x\n", i); //十六进制输出
    return 0;
}
