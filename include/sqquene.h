#ifndef SQQUENE_H
#define SQQUENE_H
#include<stdbool.h>
typedef struct sqquene{
    int* data;
    int front,rear;
}sqquene;
void sqquene_init(sqquene* q,int x);
bool sqquene_isempty(sqquene* q);
void sqquene_en(sqquene* q,int x);
int sqquene_de(sqquene* q);
int sqquene_gethead(sqquene* q);
void sqquene_destroy(sqquene* q);
#endif