#include "stack.h"

int main() {
	st stack;
	StackIint(&stack);
	StackPush(&stack,1);
	StackPush(&stack, 2);
	StackPush(&stack, 3);
	Stackpop(&stack);
	Stackpop(&stack);
	StackPush(&stack, 4);
	StackPush(&stack, 5);
	Stackpop(&stack);
	if (StackEmpty(&stack)) {
		printf("栈已空");
	}
	else {
		printf("栈非空");
	}
	printf("当前栈顶元素为：%d", StackTop(&stack));
	printf("当前栈元素个数为：%d", StackSize(&stack));
	Stackpop(&stack);
	Stackpop(&stack);
	
	if (StackEmpty(&stack)) {
		printf("栈已空");
	}
	else {
		printf("栈非空");
	}


	StackDestory(&stack);
	return 0;
}