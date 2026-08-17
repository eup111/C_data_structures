#include <stdio.h>
#include <assert.h>
#include "../include/cdquene.h"

int main() {
    cdquene q;
    cdquene_init(&q, 5);  /* 实际容量 4，牺牲一个单元判满 */
    assert(cdquene_isempty(&q));
    assert(!cdquene_isfull(&q));

    cdquene_en(&q, 10);
    cdquene_en(&q, 20);
    cdquene_en(&q, 30);
    assert(cdquene_length(&q) == 3);
    assert(cdquene_gethead(&q) == 10);

    assert(cdquene_de(&q) == 10);
    assert(cdquene_de(&q) == 20);
    cdquene_en(&q, 40);
    cdquene_en(&q, 50);
    cdquene_en(&q, 60);   /* 现在满 */
    assert(cdquene_isfull(&q));

    assert(cdquene_de(&q) == 30);
    assert(cdquene_de(&q) == 40);
    assert(cdquene_de(&q) == 50);
    assert(cdquene_de(&q) == 60);
    assert(cdquene_isempty(&q));

    cdquene_destroy(&q);
    printf("PASS\n");
    return 0;
}
