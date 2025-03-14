//#include <stdio.h>
//
//int change(int *p) // p = &i
//{
//    int result;
//    result = *p / 2;
//    return result;
//}
//int main() {
//    int i;
//    int temp;
//    scanf("%d", &i);
//    temp = change(&i);
//    printf("%d", temp);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *p;
    char c;
    scanf("%d", &n);
    p = (char *)malloc(n);
    /*
        在scanf和gets中间使用scanf("%c",&c),去除换行
        注意：OJ不支持fflush(stdin)清空标准输入缓冲区操作。
             OJ不支持gets，因为C11标准去掉了，部分学校机试可以用gets，部分不可以，因此建议使用fgets
        char *fgets(char *str, int n, FILE *stream);
            p（char *str）: 指向要存储读取内容的字符数组的指针。fgets 会将读取的字符串存储到由 p 指向的数组中。
            n（int n）: 要读取的字符数的最大值，包括字符串的终止符 \0。也就是说，fgets 最多读取 n-1 个字符，并在最后加上 \0，以确保字符串是以空字符结尾的。
            stdin（FILE *stream）: 指定从哪个输入流读取数据。在这种情况下，stdin 表示标准输入（通常是键盘输入）。
    */
    scanf("%c",&c);
    fgets(p,n,stdin);
    puts(p);

    return 0;
}