#include"binary.h"
int main(){
	bt tree;
	//char array[20]="abc##d##ef###";

	//char array[20] = "abcg##t##d##ef##h##";

	//char array[20] = "abce##g##d##f##";
	char array[20] = "abcf####d#e##";
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
	printf("二叉树深度为%d ", BinaryTreeDeep(&tree));
	if (isBalanced(&tree)) {
		printf("正确");
	}
	else {
		printf("错误");
	}
	printf("\n");
	LevelTraver(&tree);

	return 0;
}