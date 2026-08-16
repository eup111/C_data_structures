#include <stdio.h>
#include <assert.h>
#include "../include/sqquene.h"

int main() {
    sqquene q;
    sqquene_init(&q, 10);
    assert(sqquene_isempty(&q));

    sqquene_en(&q, 1);
    sqquene_en(&q, 2);
    sqquene_en(&q, 3);
    assert(sqquene_gethead(&q) == 1);

    assert(sqquene_de(&q) == 1);
    assert(sqquene_de(&q) == 2);
    assert(sqquene_de(&q) == 3);
    assert(sqquene_isempty(&q));

    sqquene_destroy(&q);
    printf("PASS\n");
    return 0;
}
