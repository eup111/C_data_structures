#include <stdio.h>
#include <stdlib.h>
#include "../include/cdlinked_list.h"

int main(){
    cdlinkedlist p;
    cdlinkedlist* a = malloc(sizeof(cdlinkedlist));
    cdlinkedlist* b = malloc(sizeof(cdlinkedlist));
    cdlinkedlist* c = malloc(sizeof(cdlinkedlist));
    cdlinkedlist* d = malloc(sizeof(cdlinkedlist));
    cdlinkedlist_init(&p);
    cdlinkedlist_init(a);a->data=1;
    cdlinkedlist_init(b);b->data=2;
    cdlinkedlist_init(c);c->data=3;
    cdlinkedlist_init(d);d->data=4;

    cdlinkedlist_addtail(&p,b);
    cdlinkedlist_addtail(&p,c);
    cdlinkedlist_addhead(&p,a);
    cdlinkedlist_print(&p);
    cdlinkedlist_insert(&p,1,d);
    cdlinkedlist_delete(&p,4);
    cdlinkedlist_print(&p);
    cdlinkedlist_destroy(&p);
    return 0;
}