#include <stdio.h>
// 关系运算符,优先级小于算数运算符
int main() {
    int i;
    while(scanf("%d", &i))
    {
        if (3<i && i<10)
        {
            printf("i is between 3 and 10\n");
        }else{
            printf("i is not between 3 and 10\n");
        }
    }
    return 0;
}
