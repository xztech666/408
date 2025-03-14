#include <stdio.h>
#include<string.h>

int mystrlen(char c[])
{
    int i=0;
    while(c[i]!='\0') // 循环条件
    {
        i++;
    }
    return i;
}

int main() {
    int len;
    char c[20];
    char d[100]="world";
    char e[100];
    gets(c);
    puts(c);
    len = strlen(c); // 统计字符串长度
    printf("len=%d\n",len);
    len = mystrlen(c);
    printf("my_len=%d\n",len);

    /* 字符串操作
        strcat()  strcpy() 里面只能放数组名,不能放字符串常量
     */
    strcat(c,d); // 字符串拼接, c=c+d
    puts(c);
    strcpy(e,c); // 字符串复制, e=c
    puts(e);

    printf("c?d=%d\n",strcmp(c,"how")); // 比较字符串(ASCII码表按位比较), 返回0表示相同, -1表示c<d, 1表示c>d

    return 0;
}
