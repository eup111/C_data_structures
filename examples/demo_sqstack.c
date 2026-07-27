#include <stdio.h>
#include "../include/sqstack.h"

int main() {
    sqstack s;
    sqstack_init(&s, 5);
    sqstack_push(&s, 1);
    sqstack_push(&s, 2);
    sqstack_push(&s, 3);
    printf("top=%d\n", sqstack_gettop(&s));
    while (!sqstack_isempty(&s))
        printf("pop=%d\n", sqstack_pop(&s));
    sqstack_destroy(&s);
    return 0;
}
