#include <stdio.h>

#define MAXSIZE 100

typedef int Elemtype; // 让顺序表存储其他类型元素时,可以快速修改
typedef struct{
    Elemtype data[MAXSIZE];
    int length; // 顺序表长度
}SqList;

// 顺序表的插入操作,因为L会改变,所以用引用
bool list_insert(SqList &L, int i, Elemtype element) {
    // 判断插入位置是否合法
    if (i < 1 || i > L.length + 1)
    {
        return false;
    }
    // 判断顺序表是否已满
    if (L.length >= MAXSIZE)
    {
        return false;
    }
    // 从后往前依次后移,空出位置放入要插入的元素
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = element; // 放入要插入的元素
    L.length++; // 顺序表长度加1
    return true; // 插入成功
}

// 打印顺序表
void print_list(SqList L) {
    for (int i = 0; i < L.length; i++)
    {
        printf("%3d", L.data[i]);
    }
    printf("\n");
}

// 顺序表的初始化及插入操作实战
int main() {
    SqList L; // 顺序表的声明
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3; // 设置长度
    bool ret; // 存储函数返回值
    ret = list_insert(L, 3, 40);
    if (ret)
    {
        printf("insert sqList success\n");
        print_list(L);
    }
    else
    {
        printf("insert sqList fail\n");
    }

    return 0;
}
