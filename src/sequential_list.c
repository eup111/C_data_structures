#include<stdio.h>
#include<stdlib.h>
#include "../include/sequential_list.h"

void seqlist_init(seqlist* seq,int capacity){
    seq->data = (int*)malloc(sizeof(int)*capacity);
    seq->length = 0;
    seq->capacity = capacity;
}

void seqlist_destroy(seqlist* seq){
    free(seq->data);
}

int seqlist_getlength(seqlist* seq){
    return seq->length;
}

/* 满则提示，不扩容 */
void seqlist_add(seqlist* seq,int data){
    if(seq->length == seq->capacity){
        printf("full");
        return;
    }
    seq->data[seq->length] = data;
    seq->length = seq->length + 1;
}

/* pos 从 0 开始，元素后移，插入 */
void seqlist_insert(seqlist* seq,int pos,int data){
    if(pos > seq->length || pos < 0) { printf("wrong pos"); return; }
    if(seq->length == seq->capacity) { printf("full");    return; }
    for(int i = seq->length; i > pos; i--)
        seq->data[i] = seq->data[i-1];
    seq->data[pos] = data;
    seq->length++;
}

/* pos 从 0 开始，元素前移覆盖 */
void seqlist_delete(seqlist* seq,int pos){
    if(pos > seq->length-1 || pos < 0) { printf("wrong pos"); return; }
    for(int i = pos; i < seq->length-1; i++)
        seq->data[i] = seq->data[i+1];
    seq->length--;
}

int seqlist_get(seqlist* seq,int pos){
    if(pos > seq->length-1 || pos < 0) { printf("wrong pos"); return 0; }
    return seq->data[pos];
}

void seqlist_print(seqlist* seq){
    for(int i = 0; i < seq->length; i++)
        printf("%d\t", seq->data[i]);
    printf("\n");
}
