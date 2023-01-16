#include"binary.h"
//初始化
void BinaryTreeInit(bt* ps) {
	ps->date = 0;
	ps->left = NULL;
	ps->right = NULL;
}
//用数组构建二叉树
bt* BinaryTreePush(bt* ps, datetype* array,int* i) {
	bt* temp = NULL;
	if (ps == NULL) {
		 temp = (bt*)malloc(sizeof(bt));
		if (temp == NULL) {
			printf("malloc fail");
			exit(1);
		}
		ps = temp;
		ps->left = NULL;
		ps->right = NULL;
		ps->date = 0;
	}
	
	if (array[*i] == '#') {
		(*i)++;
		return NULL;
	}

	ps->date = array[*i];
	(*i)++;
	ps->left = BinaryTreePush(ps->left, array, i);
	ps->right=BinaryTreePush(ps->right, array, i);
	return temp;
	
}
//显示二叉树
void BinaryTreeShow(bt* ps) {
	if (ps == NULL) {
		return;
	}
	printf("%c  ", ps->date);
	BinaryTreeShow(ps->left);
	BinaryTreeShow(ps->right);

}
//先序遍历
void PreOrder(bt* ps) {
	if (ps == NULL) {
		return;
	}
	printf("%c  ", ps->date);
	PreOrder(ps->left);
	PreOrder(ps->right);
}
//中序遍历
void MidOrder(bt* ps) {
	if (ps == NULL) {
		return;
	}
	MidOrder(ps->left);
    printf("%c  ", ps->date);
	MidOrder(ps->right);

}
//后序遍历
void LastOrder(bt* ps) {
	if (ps == NULL) {
		return;
	}
	LastOrder(ps->left);
	LastOrder(ps->right);
	printf("%c  ", ps->date);
}

void BinaryTreeDestroy(bt* ps) {
	if (ps == NULL) {
		return;
	}
	BinaryTreeDestroy(ps->left);
	BinaryTreeDestroy(ps->right);
	free(ps);
	ps = NULL;
}