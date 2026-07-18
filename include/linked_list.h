#ifndef LINKED_LIST_H
#define LINKED_LIST_H
typedef struct node{
    int data;
    struct node* next;
}linkedlist;

void linkedlist_init(linkedlist* p);
void linkedlist_destroy(linkedlist* p);

int linkedlist_getlength(linkedlist* p);

void linkedlist_add(linkedlist* p,linkedlist* q);
void linkedlist_insert(linkedlist* p,int pos,linkedlist* q);
void linkedlist_delete(linkedlist* p,int pos);
int linkedlist_get(linkedlist* p,int pos);

void linkedlist_print(linkedlist* p);
#endif