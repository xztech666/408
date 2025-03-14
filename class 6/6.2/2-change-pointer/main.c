#include <stdio.h>

void change(int *j) {
    *j = 5; // *j等价于变量i,只是间接访问
}
int main() {
    int i = 10;
    printf("before change i = %d\n", i);
    change(&i); // 传递指针,传递变量i的地址
    printf("after change i = %d\n", i);

    return 0;
}
