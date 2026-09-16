#include "../include/MGraph.h"
#include<stdio.h>
#include<stdlib.h>

void MGraph_init(MGraph* m,int Maxvex,int Maxarc){
    m->Maxarc = Maxarc;
    m->Maxvex = Maxvex;
    m->vex = calloc(Maxvex,sizeof(char));
    m->edge = calloc(Maxvex*Maxvex,sizeof(int));
}