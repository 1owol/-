#pragma once
#include<stdio.h>
#include<stdlib.h>

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

void BinaryTreeDestroy(bt* ps);

void PreOrder(bt* ps);
void LastOrder(bt* ps);
void MidOrder(bt* ps);
