#include<stdio.h>
#include "../include/sequential_list.h"
int main(){
    seqlist seq;
    seqlist_init(&seq,10);
    seqlist_add(&seq,1);
    seqlist_add(&seq,3);
    seqlist_insert(&seq,1,2);
    seqlist_print(&seq);
    seqlist_getlength(&seq);
    seqlist_delete(&seq,2);
    seqlist_print(&seq);
    seqlist_get(&seq,0);
    seqlist_destory(&seq);
    return 0;
}