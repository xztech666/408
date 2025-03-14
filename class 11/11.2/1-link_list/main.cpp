#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

void list_head_insert(LNode* &L) //LinkList和LNode*完全等价
{
    L = (LNode*)malloc(sizeof(LNode)); //申请结构体大小的空间,切忌不能写sizeof(LinkList),只有八个字节空间
    ElemType x;
    scanf("%d", &x);
    LNode *s;
    L->next = NULL;
    while (x != 9999)
    {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s; // 头结点的next,指向新节点
        scanf("%d", &x);
    }
}

void print_list(LinkList L)
{
    L = L->next;
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
