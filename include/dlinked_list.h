#ifndef DLINKED_LIST_H
#define DLINKED_LIST_H

/* 双链表结点（带头结点） */
typedef struct dlinked_node{
    int data;
    struct dlinked_node* prev;
    struct dlinked_node* next;
}dlinkedlist;

void dlinkedlist_init(dlinkedlist* p);           /* 初始化头结点 */
void dlinkedlist_destroy(dlinkedlist* p);        /* 销毁链表 */

void dlinkedlist_delete(dlinkedlist* p,int pos); /* 删除 pos 处结点 */
void dlinkedlist_insert(dlinkedlist* p,int pos,dlinkedlist* q); /* pos 从 1 开始插入 */
void dlinkedlist_addhead(dlinkedlist* p,dlinkedlist* q);       /* 头插 */
void dlinkedlist_addtail(dlinkedlist* p,dlinkedlist* q);       /* 尾插 */
int dlinkedlist_get(dlinkedlist* p,int pos);     /* 返回 pos 处结点的 data */

void dlinkedlist_print(dlinkedlist* p);          /* 打印（跳过 0 号头结点） */

#endif
