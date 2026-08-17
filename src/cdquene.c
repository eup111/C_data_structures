#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "../include/cdquene.h"

void cdquene_init(cdquene* q,int x){
    q->data = malloc(sizeof(int)*(x));
    q->front=0;
    q->rear=0;
    q->maxsize = x;
}
bool cdquene_isempty(cdquene* q){
    if(q->front==q->rear){return true;}
    return false;
}
bool cdquene_isfull(cdquene* q){
    if((q->rear+1)%q->maxsize==q->front){return true;}
    return false;
}
int cdquene_length(cdquene* q){
    return (q->rear+q->maxsize-q->front)%q->maxsize;
}
void cdquene_en(cdquene* q,int x){
    if(cdquene_isfull(q)){printf("full");}
    else{
        q->data[q->rear] = x;
        q->rear = (q->rear+1)%q->maxsize;
    }
}
int cdquene_de(cdquene* q){
    if(cdquene_isempty(q)){
        printf("empty");
        return -1;
    }
    else{
        int num = q->data[q->front];
        q->front = (q->front+1)%q->maxsize;
        return num;
    }
}
int cdquene_gethead(cdquene* q){
    if(cdquene_isempty(q)){
        printf("empty");
        return -1;
    }
    else{
        return q->data[q->front];
    }
}
void cdquene_destroy(cdquene* q){
    free(q->data);
    q->front=0;
    q->rear=0;
    q->maxsize=0;
}