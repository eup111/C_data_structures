#include "../include/binode.h"
#include<stdio.h>
#include<stdlib.h>
void binode_init(binode* node,int data){
    node->data = data;
    node->lchild=NULL;
    node->rchild=NULL;
}
void binode_addchild(binode* node,binode* l,binode* r){
    if(l){node->lchild=l;}
    else{node->lchild=NULL;}
    if(r){node->rchild=r;}
    else{node->rchild=NULL;}
}
void preorder(bitree t1){
    if(t1!=NULL){
        printf("%d",t1->data);
        preorder(t1->lchild);
        preorder(t1->rchild);
    }
}
void inorder(bitree t1){
    if(t1!=NULL){
        inorder(t1->lchild);
        printf("%d",t1->data);
        inorder(t1->rchild);
    }
}
void postorder(bitree t1){
    if(t1!=NULL){
        postorder(t1->lchild);
        postorder(t1->rchild);
        printf("%d",t1->data);
    }
}