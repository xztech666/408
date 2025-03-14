#include <stdio.h>

void print(char d[]) {
    int i=0;
    while (d[i]) {
        printf("%c",d[i]);
        i++;
    }
    printf("\n");
}

// 字符数组
int main() {
    //char c[10]={'I','a','m','h','a','p','p','y','\0'};
    // 输出字符串乱码时,要去查看字符数组中是否有结束符'\0'

    /*
    char c[10]="iamhappy"; // 这种方法更方便，直接用字符串
    printf("%s\n",c); // 使用%s输出字符串
     */

    char d[7]="hello";
    print(d);

    return 0;
}
