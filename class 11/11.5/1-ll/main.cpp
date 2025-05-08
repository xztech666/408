#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LLNode {
    ElemType data;
    struct LLNode *next;
} LLNode, *LinkList;

// 头插法
void list_head_insert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LLNode));
    L->next = NULL;
    ElemType x;
    scanf("%d", &x);
    while (x != 9999) {
        LLNode *s = (LLNode *)malloc(sizeof(LLNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
}

// 尾插法
void list_tail_insert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LLNode));
    L->next = NULL;
    LinkList s, r = L;
    ElemType x;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LinkList)malloc(sizeof(LLNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
}

// 按位置查找
LinkList GetElem(LinkList L, int i)
{
    int j = 0;
    if(i<0)
    {
        return NULL;
    }
    while (L != NULL && j < i) {
        L = L->next;
        j++;
    }
    return L;
}

// 按值查找
LinkList LocateElem(LinkList L, ElemType e)
{
    while (L != NULL && L->data != e) {
        L = L->next;
    }
    return L;
}

// 往第i个位置插入
bool ListInsert(LinkList L, ElemType InsertPos, ElemType InsertValue) // 不需要引用, 因为插入的是新结点
{
    LinkList p = GetElem(L, InsertPos-1);
    if (p == NULL)
    {
        return false;
    }
    LinkList s = (LinkList)malloc(sizeof(LLNode));
    s->data = InsertValue;
    s->next = p->next;
    p->next = s;
    return true;
}

// 输出链表
void print_list(LinkList L)
{
    L=L->next;
    while (L != NULL) {
        printf("%d ", L->data);
        L = L->next;
    }
    printf("\n");
}

int main() {
    LinkList L,Search;
//    list_head_insert(L);
    list_tail_insert(L);
    print_list(L);

    ListInsert(L, 3, 666);
    print_list(L);

    return 0;
}
