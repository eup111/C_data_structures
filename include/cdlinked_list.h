#ifndef CDLINKED_LIST_H
#define CDLINKED_LIST_H
typedef struct cdlinked_node{
    int data;
    struct cdlinked_node* prev;
    struct cdlinked_node* next;
}cdlinkedlist;

void cdlinkedlist_init(cdlinkedlist* p);           /* 初始化头结点 */
void cdlinkedlist_destroy(cdlinkedlist* p);        /* 销毁链表 */

void cdlinkedlist_delete(cdlinkedlist* p,int pos); /* 删除 pos 处结点 */
void cdlinkedlist_insert(cdlinkedlist* p,int pos,cdlinkedlist* q); /* pos 从 1 开始插入 */
void cdlinkedlist_addhead(cdlinkedlist* p,cdlinkedlist* q);       /* 头插 */
void cdlinkedlist_addtail(cdlinkedlist* p,cdlinkedlist* q);       /* 尾插 */
int cdlinkedlist_get(cdlinkedlist* p,int pos);     /* 返回 pos 处结点的 data */

void cdlinkedlist_print(cdlinkedlist* p);          /* 打印（跳过 0 号头结点） */
#endif