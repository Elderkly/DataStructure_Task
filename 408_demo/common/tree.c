//
// Created by Elderly on 2021/9/24.
//

#include <printf.h>
#include "tree.h"

void visit(BSTNode *p) {
    printf("%d", p->key);
};

//  先序
void PreOrder(BSTree T) {
    if (T != NULL) {
        visit(T);
        PreOrder(T -> lchild);
        PreOrder(T -> rchild);
    }
}

//  中序
void InOrder(BSTree T) {
    if (T != NULL) {
        InOrder(T -> lchild);
        visit(T);
        InOrder(T -> rchild);
    }
}

//  后序
void PostOrder(BSTree T) {
    if (T != NULL) {
        PostOrder(T -> lchild);
        PostOrder(T -> rchild);
        visit(T);
    }
}

