//
// Created by anggenb on 2025/4/2.
//
# include<stdio.h>

# define MAXSIZE 100

typedef int ElemType;

typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SqList;

bool list_insert(SqList &L, int i, ElemType element)
{
    // 判断是否越界, i是第几个元素
    if(i < 1 || i> L.length + 1)
    {
        return false;
    }
    if(L.length >= MAXSIZE)
    {
        return false;
    }
    for(int j=L.length;j>=i;j--)
    {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = element; // 插入元素,元素位置-1是下标位置
    L.length++;
    return true;
}

bool list_delete(SqList &L, int i, ElemType &delete_element)
{
    // 判断是否越界
    if(i<1||i>L.length)
    {
        return false;
    }
    delete_element = L.data[i-1];
    for(int j=i;j<L.length;j++)
    {
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;

}

// 打印顺序表
void print_list(SqList L)
{
    for(int i=0;i<L.length;i++) // 这里i是下表位置值
    {
        printf("%3d", L.data[i]);
    }
    printf("\n");
}

int main()
{
    SqList L;
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.length = 3;
    bool ret;
    int add_value;
    scanf("%d", &add_value);
    ret = list_insert(L, 2, add_value);
    if(ret)
    {
        print_list(L);
    }
    else
    {
        printf("false\n");
    }
    int delete_index;
    ElemType delete_element;
    scanf("%d", &delete_index);
    ret = list_delete(L, delete_index,delete_element);
    if(ret)
    {
        print_list(L);
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
