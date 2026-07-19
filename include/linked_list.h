#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/* 单链表结点（带头结点，头结点 data 无效） */
typedef struct linked_node{
    int data;
    struct linked_node* next;
}linkedlist;

void linkedlist_init(linkedlist* p);             /* 初始化头结点 */
void linkedlist_destroy(linkedlist* p);          /* 销毁链表 */

int linkedlist_getlength(linkedlist* p);         /* 返回结点数（不含头结点） */

void linkedlist_addtail(linkedlist* p,linkedlist* q); /* 尾插 */
void linkedlist_addhead(linkedlist* p,linkedlist* q); /* 头插 */
void linkedlist_insert(linkedlist* p,int pos,linkedlist* q); /* pos 从 1 开始插入 */
void linkedlist_delete(linkedlist* p,int pos);   /* 删除 pos 处结点 */
int linkedlist_get(linkedlist* p,int pos);       /* 返回 pos 处结点的 data */

void linkedlist_print(linkedlist* p);            /* 打印（跳过 0 号头结点） */

#endif
