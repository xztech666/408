//#include <stdio.h>
//
//struct stduent {
//    int num;
//    char name[20];
//    char sex;
//};
//
//int main() {
//    struct stduent s1;
//    scanf("%d %s %c", &s1.num, s1.name, &s1.sex);
//    printf("%d %s %c", s1.num, s1.name, s1.sex);
//
//    return 0;
//}

#include<stdio.h>
#include<stdlib.h>

// 当子函数要修改主函数的p, 需要用引用
void modify_pointer(char *&i) {
    i = (char *) malloc(100);
    fgets(i, 100, stdin); // stdin 是标准输入流
}
int main()
{
    char *p=NULL;
    modify_pointer(p);
    puts(p);
    free(p); // 释放内存

    return 0;
}