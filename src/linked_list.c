#include<stdio.h>
#include<stdlib.h>
#include "../include/linked_list.h"

void linkedlist_init(linkedlist* p){
    p->data = 0;
    p->next = NULL;
}

/* 逐个摘链 free */
void linkedlist_destroy(linkedlist* p){
    linkedlist* temp;
    while(p->next){
        temp = p->next;
        p->next = p->next->next;
        free(temp);
    }
}

/* 遍历计数（不含头结点） */
int linkedlist_getlength(linkedlist* p){
    int count = 0;
    for(count; p->next; count++, p = p->next);
    return count;
}

/* 走到末尾，挂链 */
void linkedlist_addtail(linkedlist* p,linkedlist* q){
    q->next = NULL;
    linkedlist* temp = p;
    while(temp->next) temp = temp->next;
    temp->next = q;
}

/* 插入头结点之后 */
void linkedlist_addhead(linkedlist* p,linkedlist* q){
    q->next = p->next;
    p->next = q;
}

/* pos 从 1 开始，插到 pos 处 */
void linkedlist_insert(linkedlist* p,int pos,linkedlist* q){
    linkedlist* temp = p;
    for(int i = 1; i < pos; i++, temp = temp->next);
    q->next = temp->next;
    temp->next = q;
}

/* pos 从 1 开始，卸链 free */
void linkedlist_delete(linkedlist* p,int pos){
    linkedlist* temp = p;
    for(int i = 1; i < pos; i++, temp = temp->next);
    linkedlist* temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}

int linkedlist_get(linkedlist* p,int pos){
    linkedlist* temp = p;
    for(int i = 1; i <= pos; i++, temp = temp->next);
    return temp->data;
}

/* 跳过 0 号头结点打印 */
void linkedlist_print(linkedlist* p){
    if(p->next == NULL) printf("empty");
    while(p->next != NULL){
        printf("%d\t", p->next->data);
        p = p->next;
    }
    printf("\n");
}
