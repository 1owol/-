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
		printf("ջ�ѿ�");
	}
	else {
		printf("ջ�ǿ�");
	}
	printf("��ǰջ��Ԫ��Ϊ��%d", StackTop(&stack));
	printf("��ǰջԪ�ظ���Ϊ��%d", StackSize(&stack));
	Stackpop(&stack);
	Stackpop(&stack);
	
	if (StackEmpty(&stack)) {
		printf("ջ�ѿ�");
	}
	else {
		printf("ջ�ǿ�");
	}


	StackDestory(&stack);
	return 0;
}