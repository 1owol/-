#include"binary.h"
int main(){
	bt tree;
	char array[20]="abc##d##ef###0";
	int i = 0;
	BinaryTreeInit(&tree);
	BinaryTreePush(&tree, array, &i);
	BinaryTreeShow(&tree);
	printf("\n");
	PreOrder(&tree);
	printf("\n");
	LastOrder(&tree);
	printf("\n");
	MidOrder(&tree);
	return 0;
}