//
// Created by Elderly on 2021/9/25.
//

#ifndef INC_408_DEMO_C___BST_TREE_H
#define INC_408_DEMO_C___BST_TREE_H

//二叉排序树结点
typedef struct BSTNode{
    int key;//数据域
    struct BSTNode *lchild,*rchild; //左、右孩子指针
}BSTNode,*BSTree;

//平衡二叉树结点
typedef struct AVLNode{
    int key;    //数据域
    int balance;    //平衡因子
    struct AVLNode *lchild,*rchild;
}AVLNode,*AVLTree;

//访问结点p
void visit(BSTNode *p);

//先序遍历
void PreOrder(BSTree T);

//中序遍历
void InOrder(BSTree T);

//后序遍历
void PostOrder(BSTree T);

//求树的深度
int treeDepth(BSTree T) ;

//在树T中找到结点p的父节点
BSTNode *findFather(BSTree T, BSTNode *p);

//在二叉排序树中查找值为 key 的结点（非递归实现）
BSTNode *BST_Search(BSTree T, int key);

//在二叉排序树中查找值为 key 的结点（递归实现）
BSTNode *BSTSearch(BSTree T, int key);

//在二叉排序树插入关键字为k的新结点（递归实现）
int BST_Insert(BSTree &T, int k);

//在二叉排序树 T 中删除结点 p（不考虑p为根节点的情况）
int BST_DeleteNode(BSTree &T, BSTNode *p);

//从二叉排序树 T 中删除关键字为 k 的结点
int BST_DeleteKey(BSTree &T, int k);

//按照 str[] 中的关键字序列建立二叉排序树
void Creat_BST(BSTree &T, int str[], int n);

//链式队列结点，用于辅助实现层序遍历
typedef struct LinkNode {
    BSTNode *data;
    struct LinkNode *next;
} LinkNode;
typedef struct {
    LinkNode *front, *rear; //队头队尾
} LinkQueue;

//初始化队列(带头结点)
void InitQueue(LinkQueue &Q);

//判断队列是否为空（带头结点）
bool IsEmpty(LinkQueue Q);

//新元素入队（带头结点）
void EnQueue(LinkQueue &Q, BSTNode *x);

//队头元素出队（带头结点）
bool DeQueue(LinkQueue &Q, BSTNode *&x);

//层序遍历
void LevelOrder(BSTree T);

//基于层序遍历打印出树的样子
void printBST(BSTree T);

//【测试代码】：测试二叉排序树的创建、遍历、求深度、插入、查找、删除 操作
int test_BinarySearchTree();

#endif //INC_408_DEMO_C___BST_TREE_H
