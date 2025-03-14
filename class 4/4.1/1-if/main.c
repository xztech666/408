#include <stdio.h>
// 练习if-else语句
int main() {
    int i;
    while(scanf("%d", &i))
    {
        if(i>0)
        {
            printf("i is bigger than 0\n");
        }
        else
        {
            printf("i is smaller than 0\n");
        }
    }
    return 0;
}
