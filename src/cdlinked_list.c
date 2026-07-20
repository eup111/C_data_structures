#include<stdio.h>
#include<stdlib.h>
#include "../include/cdlinked_list.h"

void cdlinkedlist_init(cdlinkedlist* p){
    p->data=0;
    p->next=p;
    p->prev=p;
}         
void cdlinkedlist_destroy(cdlinkedlist* p){
    while(p->prev!=p){
        cdlinkedlist* temp = p->prev;
        p->prev = p->prev->prev;
        free(temp);
    }

}        

void cdlinkedlist_delete(cdlinkedlist* p,int pos){
    cdlinkedlist* temp = p;
    for(int i = 1; i < pos; i++, temp = temp->next);
    if(temp->next->next == p){
        p->prev = temp;
        free(temp->next);
        temp->next = p;
        return;
    }
    cdlinkedlist* temp2 = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    free(temp2);
}
void cdlinkedlist_insert(cdlinkedlist* p,int pos,cdlinkedlist* q){
    cdlinkedlist* temp = p;
    for(int i = 1; i < pos; i++, temp = temp->next);
    if(temp->next == p){
        q->prev = temp;
        q->next = p;
        temp->next = q;
        p->prev=q;
        return;
    }
    q->prev = temp;
    q->next = temp->next;
    q->next->prev = q;
    temp->next = q;
}
void cdlinkedlist_addhead(cdlinkedlist* p,cdlinkedlist* q){
    if(p->next ==p){
        p->next = q;
        q->prev = p;
        q->next = p;
        p->prev=q;
        return;
    }
    q->prev = p;
    q->next = p->next;
    p->next->prev = q;
    p->next = q;
}      
void cdlinkedlist_addtail(cdlinkedlist* p,cdlinkedlist* q){
    q->next=p;
    q->prev = p->prev;
    p->prev->next=q;
    p->prev=q;
}
int cdlinkedlist_get(cdlinkedlist* p,int pos){
    cdlinkedlist* temp = p;
    for(int i = 1; i <= pos; i++, temp = temp->next);
    return temp->data;
}   

void cdlinkedlist_print(cdlinkedlist* p){
    if(p->next == p) printf("empty");
    cdlinkedlist* temp = p;
    while(temp->next != p){
        printf("%d\t", temp->next->data);
        temp = temp->next;
    }
    printf("\n");
}         