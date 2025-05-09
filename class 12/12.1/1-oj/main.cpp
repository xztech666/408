#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

// 头插法创建链表
void list_head_insert(LinkList &L)
{
    L = (LinkList) malloc(sizeof(LNode)); // 给头结点申请空间
    L->next = NULL; // 头结点不存数据
    ElemType e;
    LinkList s;
    scanf("%d", &e);
    while(e != 9999)
    {
        s = (LinkList) malloc(sizeof(LNode));
        s->data = e; // 插入数据
        s->next = L->next;
        L->next = s;
        scanf("%d", &e);
    }
}

/*
    头插法后,直接尾插法,L指向了另外的地方,没有free原有链表,属于内存泄漏,不过408不做要求
    除非是对链表节点进行删除,是必须要free节点
*/

// 尾插法创建链表
void list_tail_insert(LinkList &L)
{
    L = (LinkList) malloc(sizeof(LNode));
    L->next = NULL; // 头结点不存数据
    ElemType e;
    scanf("%d", &e);
    LinkList s, r = L; // r初始化:指向头结点
    while(e != 9999)
    {
        s = (LinkList) malloc(sizeof(LNode));
        s->data = e; // 插入数据
        r->next = s; // 原有链表的尾节点的next,指向新节点
        r = s; // 尾指针指向新的尾节点
        scanf("%d", &e);
    }
    r->next = NULL; //  最后一个结点next指向NULL
}

// 打印链表
void PrintList(LinkList L)
{
    L=L->next; // 指向第一个结点, 头结点不存数据
    while(L!=NULL)
    {
        printf("%d",L->data);//打印当前结点数据
        L=L->next;//指向下一个结点
        //  判断当前结点是否为空,注意Oj细节
        if(L!=NULL)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main(){
    LinkList L; // 头指针
    list_head_insert(L);
    PrintList(L);
    list_tail_insert(L);
    PrintList(L);

    return 0;
}