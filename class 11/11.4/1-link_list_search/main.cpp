#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct LNode {
    ElementType data;
    struct LNode *next;
}LNode, *LinkList;

/*
    struct LNode 是一个结构体类型，包含两个成员
        data：存储数据。
        next：指向下一个节点的指针，类型是 struct LNode*。
    typedef struct LNode LNode;
        将 struct LNode 类型定义了一个别名 LNode。之后可以直接用 LNode 表示 struct LNode。
    typedef struct LNode *LinkList;
        将 struct LNode* 类型定义了一个别名 LinkList。之后可以用 LinkList 表示指向 struct LNode 的指针类型。
 */

//  尾插法
void list_tail_insert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    ElementType x;
    scanf("%d", &x);
    LNode *s, *r = L; // s用来指向新建结点, r用来指向尾结点
    while(x!=9999)
    {
        s = (LNode *)malloc(sizeof(LNode)); // 为新节点申请空间
        s->data = x;
        r->next = s; // 将新结点插入到尾结点之后
        r = s; // r指向新的尾结点
        scanf("%d", &x);
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
LinkList GetElem(LinkList L, int SearchPos)
{
    int j = 0;
    if(SearchPos<0)
    {
        return NULL;
    }
    if(SearchPos==0)
    {
        return L; // 头结点
    }
    while(L!=NULL && j<SearchPos)
    {
        L = L->next;
        j++;
    }
    return L;
}

// 按值查找
LNode* LocateElem(LinkList L, ElementType SearchElem)
{
    while(L)
    {
        if(L->data = SearchElem) // 如果找到对应的值,就返回节点指针
        {
            return L;
        }
        L = L->next;
    }
    return NULL;
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
        printf("search pos success!!\n");
        printf("search->data = %d\n", search->data);
    }
    // 按值查找
    search = LocateElem(L, 6);
    if(search!=NULL)
    {
        printf("search value success!!\n");
        printf("search->data = %d\n", search->data);
    }

    return 0;
}

