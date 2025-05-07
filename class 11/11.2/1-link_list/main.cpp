#include <stdio.h>
#include <stdlib.h>

// 头插法新建链表

typedef int ElemType;

typedef struct LNode {
    ElemType data; // 节点数据域
    struct LNode *next; //  节点指针域
} LNode, *LinkList;

// 输入3,4,5,6,7,9999
void list_head_insert(LinkList &L) //LinkList和LNode*完全等价
{
    L = (LNode*)malloc(sizeof(LNode)); //申请结构体大小的空间,切忌不能写sizeof(LinkList), 否则会出错
    ElemType x;
    scanf("%d", &x);
    LNode *s; // 指向申请的新节点
    L->next = NULL;
    while (x != 9999)
    {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next; // 新节点的next指向原本链表的第一个节点
        L->next = s; // 头结点的next,指向新节点
        scanf("%d", &x);
    }
}

void print_list(LinkList L)
{
    L = L->next; // 跳过头结点
    while (L != NULL)
    {
        printf("%3d", L->data);
        L = L->next;
    }
    printf("\n");
}

// 头插法来实现新建链表
int main() {
    LinkList L; // L链表头指针,结构体指针类型
    list_head_insert(L);
    print_list(L);


    return 0;
}
