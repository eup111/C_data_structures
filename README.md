# C 数据结构库

考研数据结构复习 + C 工程实践。

## 结构

```
include/   # 头文件 (.h)
src/       # 实现 (.c)
test/      # 测试 (assert)
examples/  # 演示程序
build/     # 编译产物
docs/      # 学习笔记
```

## 构建

```bash
gcc -Iinclude src/sequential_list.c test/seqlist_test.c -o build/test.exe
```

## 数据结构

| 结构 | 状态 |
|------|------|
| 顺序表 | ✅ |
