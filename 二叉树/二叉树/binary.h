#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef char datetype;
typedef struct BinaryTree {
	struct BinaryTree* right;
	struct BinaryTree* left;
	datetype date;
}bt;
//��ʼ��
void BinaryTreeInit(bt* ps);
//�����鹹��������
bt* BinaryTreePush(bt** ps,datetype* array,int* i);
//��ʾ������
void BinaryTreeShow(bt* ps);

void BinaryTreeDestroy(bt* ps);

void PreOrder(bt* ps);
void LastOrder(bt* ps);
void MidOrder(bt* ps);