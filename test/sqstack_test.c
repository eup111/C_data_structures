#include <stdio.h>
#include <stdlib.h>
#include "../include/sqstack.h"
int main(){
    sqstack s;
    sqstack_init(&s,3);
    printf("%d\n",sqstack_isempty(&s));
    sqstack_push(&s,1);
    sqstack_push(&s,2);
    sqstack_push(&s,3);
    sqstack_push(&s,4);
    int x = sqstack_pop(&s);
    printf("%d\n",x);
    printf("%d\n",sqstack_isempty(&s));
    printf("%d\n",sqstack_gettop(&s));
    sqstack_destroy(&s);
    return 0;
}