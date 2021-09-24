//
// Created by Elderly on 2021/9/24.
//

#ifndef INC_408_DEMO_TREE_H
#define INC_408_DEMO_TREE_H
//二叉排序树结点
typedef struct BSTNode{
    int key;     //数据域
    struct BSTNode *lchild,*rchild;     //左、右孩子指针
}BSTNode, *BSTree;   //平衡二叉树结点

//  平衡二叉树
typedef struct AVLNode{
    int key;    //数据域
    int balance;    //  平衡因子
    struct AVLNode *lchild,*rchild;
}AVLNode, *AVLTree;

void visit(BSTNode *p);
void PreOrder(BSTree T);
void InOrder(BSTree T);
void PostOrder(BSTree T);
#endif //INC_408_DEMO_TREE_H
