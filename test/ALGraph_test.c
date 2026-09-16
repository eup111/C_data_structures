#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/ALGraph.h"

int main() {
    ALGraph g;
    ALGraph_init(&g, 3);

    assert(g.vertices != NULL);
    for (int i = 0; i < 3; i++)
        assert(g.vertices[i].firstarc == NULL);  /* calloc 清零 */

    g.vexnum = 2; g.arcnum = 1;
    g.vertices[0].data = 'A';
    g.vertices[1].data = 'B';

    arcnode* e = malloc(sizeof(arcnode));
    e->adjvex = 1; e->nextarc = NULL;
    g.vertices[0].firstarc = e;

    assert(g.vertices[0].data == 'A');
    assert(g.vertices[0].firstarc->adjvex == 1);
    assert(g.vertices[1].firstarc == NULL);

    printf("PASS\n");
    return 0;
}
