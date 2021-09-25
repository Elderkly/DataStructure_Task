//
// Created by Elderly on 2021/9/25.
//

#include "Tree.h"
//
// Created by Elderly on 2021/9/25.
//

#include <cstdio>
#include <cstdlib>


//初始化顺序存储的二叉树，所有结点标记为"空"
void InitSqBiTree(TreeNode t[], int length) {
    for (int i = 0; i < length; i++) {
        t[i].isEmpty = true;
    }
}
//判断下标为 index 的结点是否为空
bool isEmpty(TreeNode t[], int length, int index) {
    if (index >= length || index < 1) return true; //下标超出合法范围
    return t[index].isEmpty;
}

//访问一个结点，你可以在这里做任何你想做的事
void visitNode(TreeNode node) {
    printf("%d ", node.data);
}

//找到下标为 index 的结点的左孩子，并返回左孩子的下标，如果没有左孩子，则返回 -1
int getLchild(TreeNode t[], int length, int index) {
    //如果左孩子存在，则左孩子的下标一定是 index * 2
    int lChild = index * 2;
    if (isEmpty(t, length, lChild)) return -1;     //左孩子为空
    return lChild;
}

//找到下标为 index 的结点的右孩子，并返回右孩子的下标，如果没有右孩子，则返回 -1
int getRchild(TreeNode t[], int length, int index) {
    //如果右孩子存在，则右孩子的下标一定是 index * 2 + 1
    int rChild = index * 2 + 1;
    if (isEmpty(t, length, rChild)) return -1; //右孩子为空
    return rChild;
}

//找到下标为 index 的结点的父节点，并返回父节点的下标，如果没有父节点，则返回 -1
int getFather(TreeNode t[], int length, int index) {
    //根节点没有父节点
    if (index == 1) return -1;
    //如果父节点存在，则父节点的下标一定是 index/2，整数除法会自动向下取整
    int father = index / 2;
    if (isEmpty(t, length, father)) return -1;
    return father;
}

//从下标为 index 的结点开始先序遍历
void PreOrderSqTree(TreeNode *t, int length, int index) {
    //当前为空节点
    if (isEmpty(t, length, index))
        return;
    //访问结点
    visitNode(t[index]);
    //先序遍历左子树
    PreOrderSqTree(t, length, getLchild(t, length, index));
    //先序遍历右子树
    PreOrderSqTree(t, length, getRchild(t, length, index));
}

//从下标为 index 的结点开始中序遍历
void InOrderSqTree(TreeNode *t, int length, int index) {
    //当前为空节点
    if (isEmpty(t, length, index))
        return;
    //中序遍历左子树
    InOrderSqTree(t, length, getLchild(t, length, index));
    //访问结点
    visitNode(t[index]);
    //中序遍历右子树
    InOrderSqTree(t, length, getRchild(t, length, index));
}

//从下标为 index 的结点开始后序遍历
void PostOrderSqTree(TreeNode *t, int length, int index) {
    //当前为空节点
    if (isEmpty(t, length, index))
        return;
    //后序遍历左子树
    PostOrderSqTree(t, length, getLchild(t, length, index));
    //后序遍历右子树
    PostOrderSqTree(t, length, getRchild(t, length, index));
    //访问结点
    visitNode(t[index]);
}

//【测试代码】：建立一棵顺序二叉树，并基于顺序结构实现先序、中序、后序遍历
int test_SqBiTree() {
    TreeNode t[100];
    //定义一棵顺序存储的二叉树
    InitSqBiTree(t, 100); //初始化为空树
    //往顺序二叉树插入一些原始数据，用t[1]作为根节点，t[0]不会用于存储任何东西
    for (int i = 1; i <= 12; i++) {
        t[i].data = i;
        //插入12个结点（就是王道数据结构考点精讲视频 5.2.3 的第一个例子，大家可以看看课件）
        //插入结点后标记为非空
        t[i].isEmpty = false;
    }
    printf("【对顺序存储的二叉树先序遍历】：");
    PreOrderSqTree(t, 100, 1);
    printf("\n");
    //从根节点开始先序遍历
    printf("【对顺序存储的二叉树中序遍历】：");
    InOrderSqTree(t, 100, 1);
    printf("\n");
    //从根节点开始中序遍历
    printf("【对顺序存储的二叉树后序遍历】：");
    PostOrderSqTree(t, 100, 1); //从根节点开始后序遍历
    printf("\n");
    return 0;
}
/*~~~~~~~~~~~~~分~~~~~~~~~~~~~~~~~~~~隔~~~~~~~~~~~~~~~~~~~线~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// 从这个分割线开始，下面这些代码实现了链式存储的二叉树
// 其中，treeWidth 函数实现了"求二叉树的宽度"，也就是 "2021数据结构强化课考试"算法题第二题的参考答案
// 这段代码实现了建立一棵二叉树、并求二叉树的宽度
//二叉树的结点（链式存储）
//访问二叉树的结点 p
void visit(BiTNode *p) {
    if (p == NULL)
        return;
    printf("%d ", p->data);
}

//先序遍历二叉树
void PreOrder(BiTree root) {
    if (root == NULL)
        return;
    //访问根节点
    visit(root);
    PreOrder(root->lchild);
    PreOrder(root->rchild);
}

//中序遍历二叉树
void InOrder(BiTree root) {
    if (root == NULL)
        return;
    InOrder(root->lchild);
    visit(root);
//访问根节点
    InOrder(root->rchild);
}

//后序遍历二叉树
void PostOrder(BiTree root) {
    if (root == NULL)
        return;
    PostOrder(root->lchild);
    PostOrder(root->rchild);
    visit(root);
//访问根节点
}

//初始化队列(队列带头结点)
void InitQueue(Queue &Q) {
    //初始时 front、rear 都指向头结点
    Q.front = Q.rear = (QNode *) malloc(sizeof(QNode));
    Q.front->next = NULL;
}
//判断队列是否为空（队列带头结点）
bool IsEmpty(Queue Q) {
    if (Q.front == Q.rear)
        return true;
    else
        return false;
}

//新元素入队（队列带头结点）
void EnQueue(Queue &Q,BiTNode *x){
    //新结点插到表尾之后
    //修改表尾指针
    QNode *s = (QNode *) malloc(sizeof(QNode));
    s->data = x;
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
}
//队头元素出队（队列带头结点）
bool DeQueue(Queue &Q, BiTNode * &x){
    //空队
    if(Q.front==Q.rear)
        return false;
    QNode *p = Q.front->next; //p指向此次出队的结点
    //用变量x返回队头元素
    //修改头结点的 next 指针
    //此次是最后一个结点出队
    //修改 rear 指针
    x = p->data;
    Q.front->next = p->next;
    if(Q.rear==p)
        Q.rear = Q.front;
    free(p);
    //释放结点空间
    return true;
}

//层序遍历
void LevelOrder(BiTree T) {
    Queue Q;
    InitQueue(Q);
    BiTree p;
    EnQueue(Q, T);
    while (!IsEmpty(Q)) {
        DeQueue(Q, p);
        visit(p);
        if (p->lchild != NULL)
            EnQueue(Q, p->lchild); //左孩子入队
        if (p->rchild != NULL)
            EnQueue(Q, p->rchild); //右孩子入队
    }
}
/****此方法存在BUG***/
//基于"层序遍历"的思想，判断一棵二叉树是否是完全二叉树。
bool IsCompleteBinaryTree(BiTree T){
    if (T==NULL){
        printf("老哥，空树不是完全二叉树");
        return false;   //不是完全二叉树，返回0
    }
    Queue Q;
    InitQueue(Q);   //初始化辅助队列
    BiTree p;
    EnQueue(Q,T);   //将根结点入队
    bool flag = false; //层序遍历时，只要出现第一个叶子，或出现第一个只有左孩子的结点，则后序所有结点都必须是叶子
    while(!IsEmpty(Q)){   //队列不空则循环
        DeQueue(Q, p);   //队头结点出队
        // 当前结点没有左孩子，但是有右孩子的结点，则一定不是完全二叉树
        if(p->lchild==NULL && p->rchild!=NULL){
            return false;
        }
        //当前结点是叶子结点，则之后出现的结点必须是叶子
        if(p->lchild==NULL && p->rchild==NULL){
            flag = true;    //flag=true，表示之后必须全都是叶子
        }
        //当前结点有左孩子，但是没有右孩子，则之后出现的结点必须是都叶子
        if(p->lchild!=NULL && p->rchild==NULL){
            if (flag) {         //之前就出现过叶子，或之前就出现过只有一个孩子的分支节点
                 return false;   //不是完全二叉树
            }
            flag = true;    //flag=true，表示之后必须全都是叶子
        }
        //当前结点有左孩子，也右孩子
        if(p->lchild!=NULL && p->rchild!=NULL){
            if (flag) {
                //之前就出现过叶子，或之前就出现过只有一个孩子的分支节点
                return false;   //不是完全二叉树
            }
        }
        visit(p);
        if(p->lchild!=NULL)
            EnQueue(Q,p->lchild);  //左孩子入队
        if(p->rchild!=NULL)
            EnQueue(Q,p->rchild);  //右孩子入队
    }
    return flag;
}

//用笨方法创建一棵二叉树
BiTree creatTree() {
    BiTNode *test;
    BiTree root = (BiTree) malloc(sizeof(BiTNode));
    root->data = 1;
    BiTNode *p1 = (BiTNode *) malloc(sizeof(BiTNode));
    p1->data = 2;
    root->lchild = p1;
    BiTNode *p2 = (BiTNode *) malloc(sizeof(BiTNode));
    p2->data = 3;
    root->rchild = p2;
    BiTNode *p3 = (BiTNode *) malloc(sizeof(BiTNode));
    p3->data = 4;
    p1->lchild = p3;
    p3->lchild = NULL;
    p3->rchild = NULL;
    BiTNode *p4 = (BiTNode *) malloc(sizeof(BiTNode));
    p4->data = 5;
    p1->rchild = p4;
    BiTNode *p5 = (BiTNode *) malloc(sizeof(BiTNode));
    p5->data = 6;
    p2->lchild = p5;
    p5->lchild = NULL;
    p5->rchild = NULL;
    BiTNode *p6 = (BiTNode *) malloc(sizeof(BiTNode));
    p6->data = 7;
    p2->rchild = p6;
    p6->lchild = NULL;
    p6->rchild = NULL;
    BiTNode *p7 = (BiTNode *) malloc(sizeof(BiTNode));
    p7->data = 8;
    p4->lchild = p7;
    p7->lchild = NULL;
    p7->rchild = NULL;
    BiTNode *p8 = (BiTNode *) malloc(sizeof(BiTNode));
    p8->data = 9;
    p4->rchild = p8;
    BiTNode *p9 = (BiTNode *) malloc(sizeof(BiTNode));
    p9->data = 10;
    p8->lchild = p9;
    p9->lchild = NULL;
    p9->rchild = NULL;
    BiTNode *p10 = (BiTNode *) malloc(sizeof(BiTNode));
    p10->data = 11;
    p8->rchild = p10;
    p10->lchild = NULL;
    p10->rchild = NULL;
    test = p3;
    return root;
}

//先序遍历，同时统计各层结点总数
void PreOrderWidth(BiTree T, int level, int *width) {
    if (T == NULL) return;
    //根据当前结点所处层数，累加该层结点总数
    width[level]++;
    //遍历左子树
    //遍历右子树
    PreOrderWidth(T->lchild, level + 1, width);
    PreOrderWidth(T->rchild, level + 1, width);
}
//求树的宽度
//树的最大高度为10
int treeWidth(BiTree T) {
    int width[H]; //定义一个数组，用于统计各层的结点总数
    for (int i = 0; i < H; i++)
        width[i] = 0;
    PreOrderWidth(T, 0, width); //前序遍历二叉树，同时统计各层结点总数
    int maxWidth = 0;
    //找到最大宽度
    for (int i = 0; i < H; i++) {
        if (width[i] > maxWidth)
            maxWidth = width[i];
    }
    return maxWidth;
    //返回树的宽度
}

//利用已有的顺序二叉树，构建一棵等价的链式二叉树。本质上就是对顺序存储的二叉树进行先序遍历，同时构建新结点
void CreateBySqBiTree(TreeNode t[], int length, int index, BiTree &root){
    //判断以 t[index] 为根的树是否为空
    if(isEmpty(t, length, index)){
        //如果是空树，那么链式二叉树的根指针指向空即可
        root = NULL;
        return;
    }
    //t[index] 不是空节点，则建立与之对应的链式二叉树结点
    root = (BiTNode *) malloc(sizeof(BiTNode));
    root-> data = t[index].data;
    int index_lChild = getLchild(t, length, index);
    //找到当前结点的左孩子
    CreateBySqBiTree (t, length, index_lChild, root->lchild); //递归构建左子树
    int index_rChild = getRchild(t, length, index);
    //找到当前结点的右孩子
    CreateBySqBiTree (t, length, index_rChild, root->rchild); //递归构建右子树
}

// 利用已有的链式二叉树，构建一棵等价的顺序二叉树。目前传入的根节点 root，应该对应数组中的 t[index]
void CreateByBiTree(TreeNode t[], int length, int index, BiTree root) {
    //根节点为空
    if (root == NULL) {
        return;
    }
    //当前遍历的这个结点在数组中对应的下标，已经越界
    if (index >= length) {
        printf("兄弟啊，你给的这个数组，存不下这么大的树\n");
        return;
    }
    //将结点信息更新到数组中
    t[index].isEmpty = false;
    t[index].data = root->data;
    //当前结点的左孩子，在数组中应该对应 t[index*2]
    CreateByBiTree(t, length, index * 2, root->lchild);
    //当前结点的右孩子，在数组中应该对应 t[index*2+1]
    CreateByBiTree(t, length, index * 2 + 1, root->rchild);
}

//【测试代码】：根据顺序存储的二叉树，构造一棵与之对应的链式二叉树
int test_CreateBySqBiTree() {
    TreeNode t[100];
    //定义一棵顺序存储的二叉树
    InitSqBiTree(t, 100); //初始化为空的顺序二叉树
    //往顺序二叉树插入一些原始数据，用t[1]作为根节点，t[0]不会用于存储任何东西
    for (int i = 1; i <= 12; i++) {
        t[i].data = i;
        t[i].isEmpty = false;
        //插入12个结点（就是王道数据结构考点精讲视频 5.2.3 的第一个例子，大家可以看看课件）
        //插入结点后标记为非空
    }
    BiTree root;
    //链式存储的二叉树
    CreateBySqBiTree(t, 100, 1, root);
    printf("\n【对链式存储的二叉树先序遍历】：");
    PreOrder(root);
    printf("\n【对链式存储的二叉树中序遍历】：");
    InOrder(root);
    printf("\n【对链式存储的二叉树后序遍历】：");
    PostOrder(root);
}

//【测试代码】：根据链式存储的二叉树，构造一棵与之对应的顺序存储二叉树
int test_CreateByBiTree() {
    TreeNode t[100];
    //定义一棵顺序存储的二叉树
    InitSqBiTree(t, 100); //初始化为空的顺序二叉树
    //随便创建一棵链式存储的二叉树
    BiTree root = creatTree();
    printf("\n【对链式存储的二叉树先序遍历】：");
    PreOrder(root);
    printf("\n【对链式存储的二叉树中序遍历】：");
    InOrder(root);
    printf("\n【对链式存储的二叉树后序遍历】：");
    PostOrder(root);
    printf("\n【对链式存储的二叉树层序遍历】：");
    LevelOrder(root);
    //构建顺序存储的二叉树，根节点应对应数组元素 t[1]
    CreateByBiTree(t, 100, 1, root);
    printf("\n【链式二叉树转顺序二叉树】数组的值为：");
    for (int i = 1; i < 100; i++) {
        if (t[i].isEmpty)
            printf("空 ");
        else
            printf("%d ", t[i].data);
    }
}

//【测试代码】：求二叉树的宽度
int test_BiTreeWidth() {
    //随便创建一棵二叉树
    BiTree root = creatTree();
    //求树的宽度
    int width = treeWidth(root);
    printf("小伙汁，你这棵树的宽度=%d\n", width);
    return 0;
}

void test_IsCompleteBinaryTree() {
////随便创建一棵二叉树
//    BiTree root = creatTree();
//    printf("\n【对链式存储的二叉树先序遍历】：");
//    PreOrder(root);
//    printf("\n【对链式存储的二叉树中序遍历】：");
//    InOrder(root);
//    printf("\n【对链式存储的二叉树层序遍历】：");
//    LevelOrder(root);
//    printf("\n【层序遍历检查是否是完全二叉树】：");
//    if (IsCompleteBinaryTree(root)) {
//        printf("\n 这棵二叉树是完全二叉树");
//    } else {
//        printf("\n 这棵二叉树不是完全二叉树");
//    }
    //再建立一棵二叉树，利用顺序二叉树生成链式二叉树
    TreeNode t[100];
    //定义一棵顺序存储的二叉树
    InitSqBiTree(t, 100); //初始化为空的顺序二叉树
    //往顺序二叉树插入一些原始数据，用t[1]作为根节点，t[0]不会用于存储任何东西
    for (int i = 1; i <= 4; i++) {
        t[i].data = i;
        t[i].isEmpty = false;
        //插入12个结点（就是王道数据结构考点精讲视频 5.2.3 的第一个例子，大家可以看看课件）
        //插入结点后标记为非空
    }
    BiTree T;
    //链式存储的二叉树
    CreateBySqBiTree(t, 100, 1, T);
    printf("\n【对链式存储的二叉树先序遍历】：");
    PreOrder(T);
    printf("\n【对链式存储的二叉树中序遍历】：");
    InOrder(T);
    printf("\n【对链式存储的二叉树层序遍历】：");
    LevelOrder(T);
    printf("\n【层序遍历检查是否是完全二叉树】：");
    if (IsCompleteBinaryTree(T)) {
        printf("\n 这棵二叉树是完全二叉树");
    } else {
        printf("\n 这棵二叉树不是完全二叉树");
    }
}