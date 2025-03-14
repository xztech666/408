#include <stdio.h>

int step(int i)
{
    return i==1||i==2?i:step(i-1) + step(i-2);
}
int main() {
    int i;
    int result;
    scanf("%d", &i);
    result = step(i);
    printf("%d\n", result);
    return 0;
}
