#ifndef SEQUENTIAL_LIST_H
#define SEQUENTIAL_LIST_H

/* 顺序表：动态数组实现 */
typedef struct{
    int* data;      /* 数据存储区 */
    int length;     /* 当前元素个数 */
    int capacity;   /* 最大容量 */
}seqlist;

void seqlist_init(seqlist* seq,int capacity);   /* 初始化，分配 capacity 空间 */
void seqlist_destroy(seqlist* seq);              /* 销毁，释放 data */

int seqlist_getlength(seqlist* seq);             /* 返回当前长度 */

void seqlist_add(seqlist* seq,int data);         /* 末尾追加元素 */
void seqlist_insert(seqlist* seq,int pos,int data); /* 在 pos 处插入，pos 从 0 开始 */
void seqlist_delete(seqlist* seq,int pos);       /* 删除 pos 处元素 */
int seqlist_get(seqlist* seq,int pos);           /* 返回 pos 处元素 */

void seqlist_print(seqlist* seq);                /* 打印所有元素 */

#endif
