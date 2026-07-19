#include <stdio.h>
#include <stdlib.h>
#include "../include/linked_list.h"

int main() {
    linkedlist head;
    linkedlist_init(&head);

    linkedlist *a = malloc(sizeof(linkedlist));
    a->data = 1; a->next = NULL;
    linkedlist *b = malloc(sizeof(linkedlist));
    b->data = 2; b->next = NULL;
    linkedlist *c = malloc(sizeof(linkedlist));
    c->data = 3; c->next = NULL;

    linkedlist_addtail(&head, a);
    linkedlist_addhead(&head, c);
    linkedlist_insert(&head, 2, b);
    linkedlist_print(&head);

    linkedlist_delete(&head, 3);
    printf("%d\n", linkedlist_getlength(&head));
    linkedlist_print(&head);

    linkedlist_destroy(&head);
    linkedlist_print(&head);
    return 0;
}
