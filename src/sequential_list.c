#include<stdio.h>
#include "../include/sequential_list.h"
#include<stdlib.h>
void seqlist_init(seqlist* seq,int capacity){
    seq->data = (int* )malloc(sizeof(int)*capacity);
    seq->length=0;
    seq->capacity=capacity;
}

void seqlist_destory(seqlist* seq){
    free(seq->data);
}

int seqlist_getlength(seqlist* seq){
    return seq->length;
}

void seqlist_add(seqlist* seq,int data){
    if(seq->length==seq->capacity){
        printf("full");
        return;
    }
    seq->data[seq->length]=data;
    seq->length = seq->length+1;
}

void seqlist_insert(seqlist* seq,int pos,int data){
    if(pos>seq->length||pos<0){
        printf("wrong pos");
        return;
    }
    if(seq->length==seq->capacity){
        printf("full");
        return;
    }
    for(int i=seq->length;i>pos;i--){
        seq->data[i] = seq->data[i-1];
    }
    seq->data[pos]=data;
    seq->length = seq->length+1;
}

void seqlist_delete(seqlist* seq,int pos){
    if(pos>seq->length-1||pos<0){
        printf("wrong pos");
        return;
    }
    for(int i = pos;i<seq->length-1;i++){
        seq->data[i] = seq->data[i+1];
    }
    seq->length = seq->length-1;
    if(seq->length<0){
        seq->length=0;
    }
}

int seqlist_get(seqlist* seq,int pos){
    if(pos>seq->length-1||pos<0){
        printf("wrong pos");
        return 0;
    }
    return seq->data[pos];
}

void seqlist_print(seqlist* seq){
    for(int i=0;i<seq->length;i++){
        printf("%d\t",seq->data[i]);
    }
    printf("\n");
}    