#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/listack.h"

int main() {
    listack s;
    listack_init(&s);
    assert(listack_isempty(&s));

    listack_push(&s, 10);
    listack_push(&s, 20);
    assert(listack_gettop(&s) == 20);

    assert(listack_pop(&s) == 20);
    assert(listack_pop(&s) == 10);
    assert(listack_isempty(&s));

    listack_destroy(&s);
    printf("PASS\n");
    return 0;
}
