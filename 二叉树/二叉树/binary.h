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
<<<<<<< HEAD
//�����鹹��������
bt* BinaryTreePush(bt* ps,datetype* array,int* i);
//��ʾ������
=======
//用数组构建二叉树
bt* BinaryTreePush(bt* ps,datetype* array,int* i);
//显示二叉树
>>>>>>> ddbc5f1241d545ff9fa6385b6718ddc804609fe6
void BinaryTreeShow(bt* ps);
//����(ֻ��free malloc�����Ŀռ�)
void BinaryTreeDestroy(bt* ps);

void PreOrder(bt* ps);
void LastOrder(bt* ps);
void MidOrder(bt* ps);
<<<<<<< HEAD
 //�����
int BinaryTreeDeep(bt* ps);
//�ж�ÿ���ڵ��������������߶Ȳ����1
bool isBalanced(bt* ps);
=======
>>>>>>> ddbc5f1241d545ff9fa6385b6718ddc804609fe6
