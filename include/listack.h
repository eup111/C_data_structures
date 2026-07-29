#ifndef LISTAK_H
#define LISTACK_H
#include<stdbool.h>
typedef struct listack{
    int data;
    struct listack* next;
}listack;
void listack_init(listack* s);
listack* listack_create(int x);
bool listack_isempty(listack* s);
void listack_push(listack* s,int x);
int listack_pop(listack* s);
int listack_gettop(listack* s);
void listack_destroy(listack* s);
#endif