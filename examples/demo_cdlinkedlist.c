#include <stdio.h>
#include <stdlib.h>
#include "../include/cdlinked_list.h"

int main() {
    cdlinkedlist head;
    cdlinkedlist_init(&head);

    cdlinkedlist *a = malloc(sizeof(cdlinkedlist));
    a->data = 10; a->prev = a->next = NULL;
    cdlinkedlist *b = malloc(sizeof(cdlinkedlist));
    b->data = 20; b->prev = b->next = NULL;
    cdlinkedlist *c = malloc(sizeof(cdlinkedlist));
    c->data = 30; c->prev = c->next = NULL;

    cdlinkedlist_addtail(&head, a);
    cdlinkedlist_addtail(&head, c);
    cdlinkedlist_addhead(&head, b);
    cdlinkedlist_print(&head);  /* 20 10 30 */

    cdlinkedlist_delete(&head, 2);
    cdlinkedlist_print(&head);  /* 20 30 */

    cdlinkedlist_destroy(&head);
    return 0;
}
