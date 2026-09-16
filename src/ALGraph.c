#include "../include/ALGraph.h"
#include<stdio.h>
#include<stdlib.h>

void ALGraph_init(ALGraph* m, int maxvex){
    m->vertices = calloc(maxvex,sizeof(vnode));
}