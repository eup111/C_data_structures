/* 带头结点双链表演示 */

#include <stdio.h>
#include <stdlib.h>
#include "../include/dlinked_list.h"

int main() {
    dlinkedlist head;
    dlinkedlist_init(&head);

    dlinkedlist *a = malloc(sizeof(dlinkedlist));
    a->data = 100; a->prev = a->next = NULL;
    dlinkedlist *b = malloc(sizeof(dlinkedlist));
    b->data = 200; b->prev = b->next = NULL;
    dlinkedlist *c = malloc(sizeof(dlinkedlist));
    c->data = 300; c->prev = c->next = NULL;

    dlinkedlist_addtail(&head, a);
    dlinkedlist_addtail(&head, c);
    printf("addtail 100,300: "); dlinkedlist_print(&head);

    dlinkedlist_addhead(&head, b);
    printf("addhead 200:     "); dlinkedlist_print(&head);

    dlinkedlist_delete(&head, 2);
    printf("delete pos 2:    "); dlinkedlist_print(&head);

    printf("get pos 2 = %d\n", dlinkedlist_get(&head, 2));

    dlinkedlist_destroy(&head);
    return 0;
}
