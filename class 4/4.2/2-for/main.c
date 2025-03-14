#include <stdio.h>
// for循环实现1+2+3+...+100
int main() {
    int i, sum = 0;
    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("1+2+3+...+100=%d\n", sum);

    return 0;
}
