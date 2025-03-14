#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

void list_tail_insert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    ElemType x;
    LNode *s, *r = L; // s用来指向新建结点, r用来指向尾结点
    while(x!=9999)
    {
        s = (LNode *)malloc(sizeof(LNode)); // 为新节点申请空间
        s->data = x;
        r->next = s; // 将新结点插入到尾结点之后
        r = s; // r指向新的尾结点
    }
    r->next = NULL;
}

void print_list(LinkList L)
{
    L = L->next;
    while(L!=NULL)
    {
        printf("%3d", L->data);
        L=L->next;
    }
    printf("\n");
}

// 按位置查找
LinkList GetElem(LinkList L, int i)
{
    int j = 0;
    if(i<0)
    {
        return NULL;
    }
    if(i==0)
    {
        return L; // 头结点
    }
    while(L!=NULL && j<i)
    {
        L = L->next;
        j++;
    }
    return L;
}

// 尾插法来新建链表
int main() {
    LinkList L,search; // 链表头指针,是结构体类型指针
    list_tail_insert(L);
    print_list(L);
    // 按位置查找
    search = GetElem(L, 2);
    if(search!=NULL)
    {
        printf("search->data = %d\n", search->data);
    }

    return 0;
}
