#ifndef MGRAPH_H
#define MGRAPH_H
typedef struct MGraph{
    int Maxvex;
    int Maxarc;
    int vexnum;
    int arcnum;
    char* vex;
    int* edge;
}MGraph;

void MGraph_init(MGraph* m,int Maxvex,int Maxarc);
#endif