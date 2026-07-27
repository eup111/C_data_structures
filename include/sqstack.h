#ifndef SQSTAK_H
#define SQSTACK_H
#include<stdbool.h>
typedef struct sqstack{
    int* data;
    int top;
    int capacity;
}sqstack;
void sqstack_init(sqstack* s,int capacity);
bool sqstack_isempty(sqstack* s);
void sqstack_push(sqstack* s,int x);
int sqstack_pop(sqstack* s);
int sqstack_gettop(sqstack* s);
void sqstack_destroy(sqstack* s);

#endif