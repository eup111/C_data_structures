#include <stdio.h>
#include <stdlib.h>
#include "../include/linked_list.h"

int main() {
    linkedlist head;
    linkedlist_init(&head);

    linkedlist *a = malloc(sizeof(linkedlist));
    a->data = 100; a->next = NULL;
    linkedlist *b = malloc(sizeof(linkedlist));
    b->data = 200; b->next = NULL;

    linkedlist_add(&head, a);
    printf("add 100:  "); linkedlist_print(&head);

    linkedlist_insert(&head, 2, b);
    printf("insert 200@2:  "); linkedlist_print(&head);

    printf("get pos 1 = %d\n", linkedlist_get(&head, 1));
    printf("length = %d\n", linkedlist_getlength(&head));

    linkedlist_destroy(&head);
    return 0;
}
