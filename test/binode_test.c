#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/binode.h"

int main() {
    /*      1
     *     / \
     *    2   3
     *   / \
     *  4   5      */
    binode *n1 = malloc(sizeof(binode)), *n2 = malloc(sizeof(binode)),
           *n3 = malloc(sizeof(binode)), *n4 = malloc(sizeof(binode)),
           *n5 = malloc(sizeof(binode));
    binode_init(n1, 1); binode_init(n2, 2); binode_init(n3, 3);
    binode_init(n4, 4); binode_init(n5, 5);
    binode_addchild(n1, n2, n3);
    binode_addchild(n2, n4, n5);

    printf("pre:  ");  preorder(n1);  printf("\n");   /* 1 2 4 5 3 */
    printf("in:   ");  inorder(n1);   printf("\n");   /* 4 2 5 1 3 */
    printf("post: ");  postorder(n1); printf("\n");   /* 4 5 2 3 1 */

    free(n1); free(n2); free(n3); free(n4); free(n5);
    return 0;
}
