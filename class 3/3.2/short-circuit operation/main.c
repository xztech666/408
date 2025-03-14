#include <stdio.h>
// 短路运算
int main() {
    int i = 0;
    i&& printf("you can't see me\n"); // &&为逻辑与运算符，如果i为0，则表达式为假，不会执行printf
    int j = 1;
    j|| printf("you can see me\n"); // ||为逻辑或运算符，如果j为1，则表达式为真，会执行printf
    return 0;
}
