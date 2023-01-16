#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"queue.h"
typedef char datetype;
typedef struct BinaryTree {
	struct BinaryTree* right;
	struct BinaryTree* left;
	datetype date;
}bt;
//初始化
void BinaryTreeInit(bt* ps);
//用数组构建二叉树
bt* BinaryTreePush(bt* ps,datetype* array,int* i);
//显示二叉树
void BinaryTreeShow(bt* ps);
//销毁(只能free malloc出来的空间)
void BinaryTreeDestroy(bt* ps);

void PreOrder(bt* ps);
void LastOrder(bt* ps);
void MidOrder(bt* ps);
 //求深度
int BinaryTreeDeep(bt* ps);
//判断每个节点左右两个子树高度差不超过1
bool isBalanced(bt* ps);