# C 数据结构库

考研数据结构复习 + C 工程实践。

## 结构

```
include/   # 头文件 (.h)
src/       # 实现 (.c)
test/      # 测试
examples/  # 演示程序
build/     # 编译产物
docs/      # 学习笔记
```

## 构建

```bash
gcc -Iinclude src/sequential_list.c test/seqlist_test.c -o build/test.exe
```

## 数据结构

### 顺序表 — `seqlist`

| 函数 | 说明 |
|------|------|
| `seqlist_init` | 初始化 |
| `seqlist_destroy` | 销毁 |
| `seqlist_add` | 末尾追加 |
| `seqlist_insert` | 指定位置插入 |
| `seqlist_delete` | 指定位置删除 |
| `seqlist_get` | 按位置取值 |
| `seqlist_getlength` | 获取长度 |
| `seqlist_print` | 打印 |

### 单链表（带头结点） — `linkedlist`

| 函数 | 说明 |
|------|------|
| `linkedlist_init` | 初始化头结点 |
| `linkedlist_destroy` | 销毁 |
| `linkedlist_addtail` | 尾插 |
| `linkedlist_addhead` | 头插 |
| `linkedlist_insert` | 指定位置插入 |
| `linkedlist_delete` | 指定位置删除 |
| `linkedlist_get` | 按位置取值 |
| `linkedlist_getlength` | 获取长度 |
| `linkedlist_print` | 打印 |

### 双链表（带头结点） — `dlinkedlist`

| 函数 | 说明 |
|------|------|
| `dlinkedlist_init` | 初始化头结点 |
| `dlinkedlist_destroy` | 销毁 |
| `dlinkedlist_addtail` | 尾插 |
| `dlinkedlist_addhead` | 头插 |
| `dlinkedlist_insert` | 指定位置插入 |
| `dlinkedlist_delete` | 指定位置删除 |
| `dlinkedlist_get` | 按位置取值 |
| `dlinkedlist_print` | 打印 |

### 循环双链表（带头结点） — `cdlinkedlist`

| 函数 | 说明 |
|------|------|
| `cdlinkedlist_init` | 初始化头结点 |
| `cdlinkedlist_destroy` | 销毁 |
| `cdlinkedlist_addtail` | 尾插 |
| `cdlinkedlist_addhead` | 头插 |
| `cdlinkedlist_insert` | 指定位置插入 |
| `cdlinkedlist_delete` | 指定位置删除 |
| `cdlinkedlist_get` | 按位置取值 |
| `cdlinkedlist_print` | 打印 |
