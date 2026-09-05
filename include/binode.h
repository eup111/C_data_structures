#ifndef BINODE_H
#define BINODE_H
typedef struct binode{
    int data;
    struct binode* lchild;
    struct binode* rchild;
}binode,*bitree;
void binode_init(binode* node,int data);
void binode_addchild(binode* node,binode* l,binode* r);
void preorder(bitree t);
void inorder(bitree t);
void postorder(bitree t);
#endif

