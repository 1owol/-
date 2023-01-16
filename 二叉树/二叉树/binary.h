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
//åˆå§‹åŒ–
void BinaryTreeInit(bt* ps);
<<<<<<< HEAD
//ÓÃÊı×é¹¹½¨¶ş²æÊ÷
bt* BinaryTreePush(bt* ps,datetype* array,int* i);
//ÏÔÊ¾¶ş²æÊ÷
=======
//ç”¨æ•°ç»„æ„å»ºäºŒå‰æ ‘
bt* BinaryTreePush(bt* ps,datetype* array,int* i);
//æ˜¾ç¤ºäºŒå‰æ ‘
>>>>>>> ddbc5f1241d545ff9fa6385b6718ddc804609fe6
void BinaryTreeShow(bt* ps);
//Ïú»Ù(Ö»ÄÜfree malloc³öÀ´µÄ¿Õ¼ä)
void BinaryTreeDestroy(bt* ps);

void PreOrder(bt* ps);
void LastOrder(bt* ps);
void MidOrder(bt* ps);
<<<<<<< HEAD
 //ÇóÉî¶È
int BinaryTreeDeep(bt* ps);
//ÅĞ¶ÏÃ¿¸ö½Úµã×óÓÒÁ½¸ö×ÓÊ÷¸ß¶È²î²»³¬¹ı1
bool isBalanced(bt* ps);
=======
>>>>>>> ddbc5f1241d545ff9fa6385b6718ddc804609fe6
