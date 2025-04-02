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
    L.data[i - 1] = element;
    L.length++;
    return true;
}

// 打印顺序表
void print_list(SqList L) {
    for (int i = 0; i < L.length; i++)
    {
        printf("%3d", L.data[i]);
    }
    printf("\n");
}

// 顺序表的删除操作,因为L会改变,所以用引用  i:要删除的元素的下标(int)  &element:引用的原因: 要获取被删除的元素
bool list_delete(SqList &L, int i, Elemtype &delete_element) {
    // 判断删除位置是否合法
    if (i < 1 || i > L.length)
    {
        return false; // 删除失败,函数提前结束
    }
    // 保存要删除的元素
    delete_element = L.data[i - 1];
    // 从要删除的位置开始,依次前移
    for (int j = i; j < L.length; j++)
    {
        L.data[j - 1] = L.data[j];
    }
    L.length--; // 执行一次,长度减1,但是空间不会释放
    return true;
}

// 顺序表的查找操作,找到了返回对应的下标,没找到返回0
int locate_element(SqList L, Elemtype element) {
    for(int i = 0; i < L.length; i++) // 遍历顺序表
    {
        if (L.data[i] == element)
        {
            return i + 1; // 因为i是数组下标,所以要加1才是位置
        }
    }
    return 0;
}

// 顺序表的初始化及插入删除查找操作实战
int main() {
    SqList L; // 顺序表的声明
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3; // 设置长度
    bool ret; // 存储函数返回值
    ret = list_insert(L, 2, 40);
    if (ret)
    {
        printf("insert sqList success\n");
        print_list(L);
    }
    else
    {
        printf("insert sqList fail\n");
    }
    printf("------------------------------------\n");
    // 删除操作
    Elemtype delete_element; // 存储被删除的元素
    ret = list_delete(L, 1, delete_element);
    if (ret)
    {
        printf("delete sqList success\n");
        print_list(L);
        printf("delete element is %d\n", delete_element);
    }
    else
    {
        printf("delete sqList fail\n");
    }
    printf("------------------------------------\n");
    int position; // 存储查找元素的位置
    position = locate_element(L, 40);
    if (position)
    {
        printf("found this element, position is %d\n", position);
    }
    else
    {
        printf("don't found this element\n");
    }

    return 0;
}
