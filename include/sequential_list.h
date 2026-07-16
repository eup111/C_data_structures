#ifndef SEQUENTIAL_LIST_H
#define SEQUENTIAL_LIST_H
typedef struct{
    int* data;
    int length;
    int capacity;
}seqlist;

void seqlist_init(seqlist* seq,int capacity);
void seqlist_destory(seqlist* seq);

int seqlist_getlength(seqlist* seq);

void seqlist_add(seqlist* seq,int data);
void seqlist_insert(seqlist* seq,int pos,int data);
void seqlist_delete(seqlist* seq,int pos);
int seqlist_get(seqlist* seq,int pos);

void seqlist_print(seqlist* seq);

#endif
