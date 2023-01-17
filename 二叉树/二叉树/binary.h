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
//��ʼ��
void BinaryTreeInit(bt* ps);
//�����鹹��������
bt* BinaryTreePush(bt* ps,datetype* array,int* i);
//��ʾ������
void BinaryTreeShow(bt* ps);
//����(ֻ��free malloc�����Ŀռ�)
void BinaryTreeDestroy(bt* ps);

void PreOrder(bt* ps);
void LastOrder(bt* ps);
void MidOrder(bt* ps);
 //�����
int BinaryTreeDeep(bt* ps);
//�ж�ÿ���ڵ��������������߶Ȳ����1
bool isBalanced(bt* ps);