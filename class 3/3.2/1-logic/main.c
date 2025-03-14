#include <stdio.h>

int main() {
    int year;
    int i, j = 1;
    while(scanf("%d", &year))
    {
        if(year == 0)
            break;
        else if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
            printf("this is leap year\n");
        else
            printf("this is not leap year\n");
    }

    i = !!j; // 从右往左
    printf("i value is %d\n", i);

    return 0;
}
