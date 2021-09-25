//
// Created by Elderly on 2021/9/25.
//

#ifndef INC_408_DEMO_C___TREE_H
#define INC_408_DEMO_C___TREE_H

#include <cstdio>
#include <cstdlib>
#define H 10
// 下面这段代码实现的二叉树的顺序存储，以及基于顺序存储的二叉树如何找左/右孩子、如何找父节点，如何基于顺序二叉树实现前中后序遍历
// 建议同学们从 test_SqBiTree() 函数开始阅读代码
typedef struct TreeNode {
    int data;
    //结点中的数据元素
    bool isEmpty; //结点是否为空
} TreeNode;

//初始化顺序存储的二叉树，所有结点标记为"空"
void InitSqBiTree(TreeNode t[], int length);
//判断下标为 index 的结点是否为空
bool isEmpty(TreeNode t[], int length, int index);

//访问一个结点，你可以在这里做任何你想做的事
void visitNode(TreeNode node);

//找到下标为 index 的结点的左孩子，并返回左孩子的下标，如果没有左孩子，则返回 -1
int getLchild(TreeNode t[], int length, int index);

//找到下标为 index 的结点的右孩子，并返回右孩子的下标，如果没有右孩子，则返回 -1
int getRchild(TreeNode t[], int length, int index);

//找到下标为 index 的结点的父节点，并返回父节点的下标，如果没有父节点，则返回 -1
int getFather(TreeNode t[], int length, int index);

//从下标为 index 的结点开始先序遍历
void PreOrderSqTree(TreeNode *t, int length, int index);

//从下标为 index 的结点开始中序遍历
void InOrderSqTree(TreeNode *t, int length, int index);

//从下标为 index 的结点开始后序遍历
void PostOrderSqTree(TreeNode *t, int length, int index);

//【测试代码】：建立一棵顺序二叉树，并基于顺序结构实现先序、中序、后序遍历
int test_SqBiTree();
/*~~~~~~~~~~~~~分~~~~~~~~~~~~~~~~~~~~隔~~~~~~~~~~~~~~~~~~~线~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// 从这个分割线开始，下面这些代码实现了链式存储的二叉树
// 其中，treeWidth 函数实现了"求二叉树的宽度"，也就是 "2021数据结构强化课考试"算法题第二题的参考答案
// 这段代码实现了建立一棵二叉树、并求二叉树的宽度
//二叉树的结点（链式存储）
typedef struct BiTNode {
    int data;
//数据域
    struct BiTNode *lchild, *rchild; //左、右孩子指针
} BiTNode, *BiTree;

//访问二叉树的结点 p
void visit(BiTNode *p);

//先序遍历二叉树
void PreOrder(BiTree root);
//中序遍历二叉树
void InOrder(BiTree root);

//后序遍历二叉树
void PostOrder(BiTree root);

//链式队列结点，用于辅助实现层序遍历（408考试中，对树层序遍历不需要自己定义队列，直接使用队列的基本操作并加以说明即可）
typedef struct QNode {
    BiTNode *data;
    struct QNode *next;
} QNode;
typedef struct {
    QNode *front, *rear; //队头队尾
} Queue;

//初始化队列(队列带头结点)
void InitQueue(Queue &Q);
//判断队列是否为空（队列带头结点）
bool IsEmpty(Queue Q);

//新元素入队（队列带头结点）
void EnQueue(Queue &Q,BiTNode *x);
//队头元素出队（队列带头结点）
bool DeQueue(Queue &Q, BiTNode *&x);

//层序遍历
void LevelOrder(BiTree T);
//基于"层序遍历"的思想，判断一棵二叉树是否是完全二叉树。
bool IsCompleteBinaryTree(BiTree T);

//用笨方法创建一棵二叉树
BiTree creatTree();

//先序遍历，同时统计各层结点总数
void PreOrderWidth(BiTree T, int level, int *width);

//求树的宽度
//树的最大高度为10
int treeWidth(BiTree T);

//利用已有的顺序二叉树，构建一棵等价的链式二叉树。本质上就是对顺序存储的二叉树进行先序遍历，同时构建新结点
void CreateBySqBiTree(TreeNode t[], int length, int index, BiTree &root);

// 利用已有的链式二叉树，构建一棵等价的顺序二叉树。目前传入的根节点 root，应该对应数组中的 t[index]
void CreateByBiTree(TreeNode t[], int length, int index, BiTree root);

//【测试代码】：根据顺序存储的二叉树，构造一棵与之对应的链式二叉树
int test_CreateBySqBiTree();

//【测试代码】：根据链式存储的二叉树，构造一棵与之对应的顺序存储二叉树
int test_CreateByBiTree();
//【测试代码】：求二叉树的宽度
int test_BiTreeWidth();

void test_IsCompleteBinaryTree();

#endif //INC_408_DEMO_C___TREE_H
