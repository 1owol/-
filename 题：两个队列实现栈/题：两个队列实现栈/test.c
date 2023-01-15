#include"queue.h"
#include"tmyq.h"

int main() {
	st stack;
	Queue qu1;
	Queue qu2;
	stack.qu1 = &qu1;
	stack.qu2 = &qu2;
	StackInit(&stack);
	StackPush(&stack, 1);
	StackPush(&stack, 2);
	StackPush(&stack, 3);
	StackPush(&stack, 4);
	StackPop(&stack);
	StackPop(&stack);
	StackPop(&stack);
	StackPush(&stack, 5);
	StackPop(&stack);
	StackPop(&stack);
	StackPush(&stack, 6);
	StackPop(&stack);
	return 0;
}