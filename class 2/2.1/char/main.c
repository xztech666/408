#include <stdio.h>
// 大写变小写
int main() {
    char c = 'A';
    // 输出为小写字母, 32为字母的偏移量,小写字母的ASCII码比大写字母大32
    printf("%c\n", c + 32); // 以字符形式输出
    printf("%d\n", c); // 以数字形式输出

    // 字符串长度
    char str[] = "hello world";
    printf("%d\n", sizeof(str));

    return 0;
}
