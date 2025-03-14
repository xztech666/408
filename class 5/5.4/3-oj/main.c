/*
#include <stdio.h>

int main() {
    int i;
    int a[100];
    int j = 0;
    int count = 0;
    scanf("%d",&i);
    for(j = 0;j < i;j++)
    {
        scanf("%d",&a[j]); //循环读取多个整形元素
    }
    for (j = 0; j < i; j++) {
        if (a[j] == 2) {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
*/

#include<stdio.h>
#include<string.h>

// string-reverse
int main()
{
    char a[100];
    char c[100];
    gets(a);
    // 字符串逆转
    int i = 0;
    while(a[i] != '\0')
    {
        i++;
    }
    strcpy(c, a);
    for(int j = 0;j < i/2;j++)
    {
        char temp = a[j];
        a[j] = a[i-j-1];
        a[i-j-1] = temp;
    }
    int result = strcmp(c, a);

    if (result < 0)

    {

        printf("%d\n",-1);

    }

    else if (result > 0)

    {

        printf("%d\n", 1);

    }

    else {

        printf("%d\n", 0);

    }

    return 0;
}