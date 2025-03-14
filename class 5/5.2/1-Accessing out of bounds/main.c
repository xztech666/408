#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5};
    int j = 20;
    int i = 10;
//    printf("a[0]=%d\n", a[0]);
    a[5] = 6; // 访问越界
    a[6] = 7;
    printf("i=%d", i); // i并没有赋值,但是值却变化了

    return 0;
}
