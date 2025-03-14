#include <stdio.h>
#include <stdlib.h>

// 链表节点定义
typedef struct ListNode {
    int data;
    struct ListNode* next;
} ListNode;

// 创建节点
ListNode* createNode(int data) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 查找链表倒数第k个节点
ListNode* findKthFromEnd(ListNode* head, int k) {
    ListNode *fast = head, *slow = head;
    // 快指针先走k步
    for (int i = 0; i < k; i++) {
        if (!fast) return NULL; // 如果链表长度不足k
        fast = fast->next;
    }
    // 快慢指针同时前进
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow; // 慢指针即为倒数第k个节点
}

// 获取链表的中间节点
ListNode* findMiddle(ListNode* head) {
    ListNode *slow = head, *fast = head;
    // 快指针一次走两步，慢指针一次走一步
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow; // 慢指针即为中间节点
}

// 判断链表是否有环
int hasCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { // 相遇则有环
            return 1;
        }
    }
    return 0;
}

// 获取环的长度
int cycleLength(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { // 相遇
            int length = 0;
            do { // 计算环长
                slow = slow->next;
                length++;
            } while (slow != fast);
            return length;
        }
    }
    return 0; // 无环返回0
}

// 打印链表
void printList(ListNode* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    return 0;
}