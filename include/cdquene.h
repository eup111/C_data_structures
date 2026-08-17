#ifndef CDQUENE_H
#define CDQUENE_H
#include<stdbool.h>
typedef struct cdquene{
    int* data;
    int front,rear,maxsize;
}cdquene;

void cdquene_init(cdquene* q,int x);
bool cdquene_isempty(cdquene* q);
bool cdquene_isfull(cdquene* q);
int cdquene_length(cdquene* q);
void cdquene_en(cdquene* q,int x);
int cdquene_de(cdquene* q);
int cdquene_gethead(cdquene* q);
void cdquene_destroy(cdquene* q);
#endif