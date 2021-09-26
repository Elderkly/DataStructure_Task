//
// Created by Elderly on 2021/9/26.
//

#ifndef INC_408_DEMO_C___HASHTABLE_H
#define INC_408_DEMO_C___HASHTABLE_H
// 这段代码实现了散列表（用拉链法解决冲突）
#include <cstdlib>
#include <cstdio>
#define N 7 //散列表的长度

//用于存储关键字的结点
typedef struct HaNode {
    int key;
    struct HaNode * next;
} HaNode;
//链头指针
typedef struct {
    HaNode * h;
} HashTable[N];

/**
* 初始化散列表
* @param hashTable
*/
void InitHashTable (HashTable t);
/**
* 在散列表 t 中插入元素 key
* @param t
* @param key
* @return
*/
int InsertElem (HashTable t, int key);
/**
* 在散列表 t 中删除值为 key 的元素
* @param t
* @param key
* @return
*/
int DeleteElem (HashTable t, int key);
/**
* 在散列表 t 中查找值为 key 的元素
* @param t
* @param key
* @return
*/
HaNode * GetElem (HashTable t, int key);
//打印出散列表的样子
void PrintHashTable(HashTable t);
/**
* 测试函数，初始化散列表 h，并插入、查找、删除一些元素
*/
void test_HashTable();
#endif //INC_408_DEMO_C___HASHTABLE_H
