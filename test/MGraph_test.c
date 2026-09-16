#include <stdio.h>
#include <assert.h>
#include "../include/MGraph.h"

int main() {
    MGraph g;
    MGraph_init(&g, 4, 5);

    assert(g.Maxvex == 4);
    assert(g.Maxarc == 5);
    assert(g.vex != NULL);
    assert(g.edge != NULL);
    assert(g.edge[0] == 0);   /* calloc 清零 */

    g.vexnum = 2;
    g.arcnum = 1;
    g.vex[0] = 'A'; g.vex[1] = 'B';
    g.edge[0*g.Maxvex + 1] = g.edge[1*g.Maxvex + 0] = 1;
    assert(g.edge[0*g.Maxvex + 1] == 1);
    assert(g.edge[1*g.Maxvex + 0] == 1);
    assert(g.vexnum == 2 && g.arcnum == 1);

    printf("PASS\n");
    return 0;
}
