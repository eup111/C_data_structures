#include <stdio.h>
#include <stdlib.h>
#include "../include/dlinked_list.h"

int main() {
    dlinkedlist head;
    dlinkedlist_init(&head);

    dlinkedlist *a = malloc(sizeof(dlinkedlist));
    a->data = 1; a->prev = a->next = NULL;
    dlinkedlist *b = malloc(sizeof(dlinkedlist));
    b->data = 2; b->prev = b->next = NULL;
    dlinkedlist *c = malloc(sizeof(dlinkedlist));
    c->data = 3; c->prev = c->next = NULL;

    /* 尾插 */
    dlinkedlist_addtail(&head, a);
    dlinkedlist_addtail(&head, c);
    dlinkedlist_print(&head);                    /* 1 3 */

    /* 头插 */
    dlinkedlist_addhead(&head, b);
    dlinkedlist_print(&head);                    /* 2 1 3 */

    /* 插入 */
    dlinkedlist *d = malloc(sizeof(dlinkedlist));
    d->data = 99; d->prev = d->next = NULL;
    dlinkedlist_insert(&head, 3, d);
    dlinkedlist_print(&head);                    /* 2 1 99 3 */

    /* 删除 */
    dlinkedlist_delete(&head, 4);
    dlinkedlist_print(&head);                    /* 2 1 99 */

    /* 取值 */
    printf("%d\n", dlinkedlist_get(&head, 2));   /* 1 */

    /* 销毁 */
    dlinkedlist_destroy(&head);
    dlinkedlist_print(&head);                    /* empty */

    printf("PASS\n");
    return 0;
}
