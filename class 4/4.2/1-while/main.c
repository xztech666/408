#include <stdio.h>
// 计算1+2+...+100的和
int main() {
    int i = 1, total = 0;
    while(i<=100)
    {
        total = total + i;
        i++;
    }
    printf("1+2+...+100=%d\n", total);

    return 0;
}
