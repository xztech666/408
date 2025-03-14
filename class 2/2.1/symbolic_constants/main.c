# include<stdio.h>
//符号常量

# define PI 3+2
int main()
{
    int i = PI * 2; // i就是一个整形变量,占4个字节
    printf("sizeof(i)=%d\n",sizeof(i));
    printf("i=%d\n",i);
    // 结果是7,原因是符号常量PI再替换的过程中是直接替换的
    // 3+2*2 = 7

    return 0;
}

