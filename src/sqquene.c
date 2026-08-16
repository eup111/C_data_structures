#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "../include/sqquene.h"

void sqquene_init(sqquene* q,int x){
    q->data = malloc(sizeof(int)*x);
    q->front=0;
    q->rear=0;
}
bool sqquene_isempty(sqquene* q){
    if(q->front==q->rear){return true;}
    return false;
}
void sqquene_en(sqquene* q,int x){
    q->data[q->rear] = x;
    q->rear++;
}
int sqquene_de(sqquene* q){
    return q->data[q->front++];
}
int sqquene_gethead(sqquene* q){
    if(!sqquene_isempty(q)){return q->data[q->front];}
}
void sqquene_destroy(sqquene* q){
    free(q->data);
    q->front=0;
    q->rear=0;
}