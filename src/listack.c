#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "../include/listack.h"

void listack_init(listack* s){
    s->data=0;
    s->next=NULL;
}
listack* listack_create(int x){
    listack* s = malloc(sizeof(listack));
    s->data=x;
    s->next=NULL;
    return s;
}
bool listack_isempty(listack* s){
    if(s->next==NULL){
        return true;
    }
    return false;
}
void listack_push(listack* s,int x){
    listack* nex = listack_create(x);
    nex->next=s->next;
    s->next=nex;
}
int listack_pop(listack* s){
    if(s->next==NULL){
        printf("stack empty\n");
        return 0;
    }
    int data = s->next->data;
    listack* temp = s->next;
    s->next=s->next->next;
    free(temp);
    return data;
}
int listack_gettop(listack* s){
    if(s->next==NULL){
        printf("stack empty\n");
        return 0;
    }
    return s->next->data;
}
void listack_destroy(listack* s){
    listack* temp =s;
    listack* temp2;
    while(temp->next!=NULL){
        temp2=temp->next;
        temp->next=temp->next->next;
        free(temp2);
    }
}