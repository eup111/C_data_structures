#ifndef ALGRAPH_H
#define ALGRAPH_H
typedef struct arcnode{
    int adjvex;
    struct arcnode* nextarc;
}arcnode;
typedef  struct vnode{
    int data;
    arcnode* firstarc;
}vnode,*adjlist;
typedef struct ALGraph{
    adjlist vertices;
    int arcnum,vexnum;
}ALGraph;

void ALGraph_init(ALGraph* m, int maxvex);
#endif