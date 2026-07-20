#include "../include/sequential_list.h"
#include <stdio.h>

int main() {
    seqlist list;
    seqlist_init(&list, 10);

    seqlist_add(&list, 10);
    seqlist_add(&list, 20);
    seqlist_add(&list, 30);
    printf("add 10,20,30:  "); seqlist_print(&list);

    seqlist_insert(&list, 1, 99);
    printf("insert 99@1:  "); seqlist_print(&list);

    seqlist_delete(&list, 0);
    printf("delete pos 0:  "); seqlist_print(&list);

    printf("get pos 0 = %d\n", seqlist_get(&list, 0));
    printf("length = %d\n", seqlist_getlength(&list));

    seqlist_destroy(&list);
    return 0;
}
