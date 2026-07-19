#include<stdio.h>
#include<stdlib.h>
#include "../include/dlinked_list.h"

void dlinkedlist_init(dlinkedlist* p){
    p->data = 0;
    p->next = p->prev = NULL;
}

/* 逐个摘链 free，只走 next */
void dlinkedlist_destroy(dlinkedlist* p){
    dlinkedlist* temp;
    while(p->next){
        temp = p->next;
        p->next = p->next->next;
        free(temp);
    }
}

/* 删最后一结点特殊处理（prev 不用更新） */
void dlinkedlist_delete(dlinkedlist* p,int pos){
    dlinkedlist* temp = p;
    for(int i = 1; i < pos; i++, temp = temp->next);
    if(temp->next->next == NULL){
        free(temp->next);
        temp->next = NULL;
        return;
    }
    dlinkedlist* temp2 = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    free(temp2);
}

/* 尾插特殊处理（next 为 NULL 时不设 prev） */
void dlinkedlist_insert(dlinkedlist* p,int pos,dlinkedlist* q){
    dlinkedlist* temp = p;
    for(int i = 1; i < pos; i++, temp = temp->next);
    if(temp->next == NULL){
        q->prev = temp;
        q->next = NULL;
        temp->next = q;
        return;
    }
    q->prev = temp;
    q->next = temp->next;
    q->next->prev = q;
    temp->next = q;
}

/* 空表特殊处理 */
void dlinkedlist_addhead(dlinkedlist* p,dlinkedlist* q){
    if(p->next == NULL){
        p->next = q;
        q->prev = p;
        q->next = NULL;
        return;
    }
    q->prev = p;
    q->next = p->next;
    p->next->prev = q;
    p->next = q;
}

/* 走到末尾，双向挂链 */
void dlinkedlist_addtail(dlinkedlist* p,dlinkedlist* q){
    q->next = NULL;
    dlinkedlist* temp = p;
    while(temp->next) temp = temp->next;
    temp->next = q;
    q->prev = temp;
}

int dlinkedlist_get(dlinkedlist* p,int pos){
    dlinkedlist* temp = p;
    for(int i = 1; i <= pos; i++, temp = temp->next);
    return temp->data;
}

void dlinkedlist_print(dlinkedlist* p){
    if(p->next == NULL) printf("empty");
    while(p->next != NULL){
        printf("%d\t", p->next->data);
        p = p->next;
    }
    printf("\n");
}
