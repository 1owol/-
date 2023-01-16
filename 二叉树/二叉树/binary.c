#include"binary.h"
//��ʼ��
void BinaryTreeInit(bt* ps) {
	ps->date = 0;
	ps->left = NULL;
	ps->right = NULL;
}
//�����鹹��������
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
//��ʾ������
void BinaryTreeShow(bt* ps) {
	if (ps == NULL) {
		return;
	}
	printf("%c  ", ps->date);
	BinaryTreeShow(ps->left);
	BinaryTreeShow(ps->right);

}
//�������
void PreOrder(bt* ps) {
	if (ps == NULL) {
		return;
	}
	printf("%c  ", ps->date);
	PreOrder(ps->left);
	PreOrder(ps->right);
}
//�������
void MidOrder(bt* ps) {
	if (ps == NULL) {
		return;
	}
	MidOrder(ps->left);
    printf("%c  ", ps->date);
	MidOrder(ps->right);

}
//�������
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

int BinaryTreeDeep(bt* ps) {

	if (ps == NULL) {
		return 0;
	}
	int a = BinaryTreeDeep(ps->right);
	int b = BinaryTreeDeep(ps->left);
	return a > b ? a+1 : b+1;
}

bool isBalanced(bt* ps) {
	if (ps == NULL) {
		return true;
	}
	int a = BinaryTreeDeep(ps->right);
	int b = BinaryTreeDeep(ps->left);
	return abs(a - b) < 2 && isBalanced(ps->left) && isBalanced(ps->right);
}
//�������
void LevelTraver(bt* ps) {
	Queue qu;
	QueueInit(&qu);
	QueuePush(&qu, ps);
	while (!QueueEmpty(&qu)) {
		bt* root = QueueFront(&qu);
		if (root->left != NULL) {
			QueuePush(&qu, root->left);
		}
		if (root->right != NULL) {
			QueuePush(&qu, root->right);
		}
		QueuePop(&qu);
		printf("%c", root->date);
	}
	
}