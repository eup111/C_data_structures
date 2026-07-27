#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "../include/sqstack.h"

void sqstack_init(sqstack* s,int capacity){
    s->data = malloc(sizeof(int)*capacity);
    s->top=-1;
    s->capacity = capacity;
}
bool sqstack_isempty(sqstack* s){
    if(s->top==-1){
        return true;
    }
    return false;
}
void sqstack_push(sqstack* s,int x){
    if(s->top==s->capacity-1){
        printf("stack full");
        return;
    }    
    
    s->data[++s->top]=x;
}
int sqstack_pop(sqstack* s){
    if(s->top==-1){
        printf("stack empty");
        return 0;
    }
    return s->data[s->top--];
}
int sqstack_gettop(sqstack* s){
    return s->data[s->top];
}
void sqstack_destroy(sqstack* s){
    free(s->data);
    s->top=-1;
    s->capacity=0;
}