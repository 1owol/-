#include"stack.h"
#include"tmyq.h"

void QueueIint(qu* ps) {
	StackIint(ps->stack1);
	StackIint(ps->stack2);
}
//入队列
void QueuePush(qu* ps,datetype x) {
		StackPush(ps->stack1, x);
}
//出队列
void QueuePop(qu* ps) {
	if (StackEmpty(ps->stack2)) {
		while (!StackEmpty(ps->stack1)) {
			datetype i = StackTop(ps->stack1);
			Stackpop(ps->stack1);
			StackPush(ps->stack2, i);
		}
	}
	StackLook(ps->stack2);
	Stackpop(ps->stack2);
}
//获取队列中数的个数
int QeueuSize(qu* ps) {
	return StackSize(ps->stack1) + StackSize(ps->stack2);
}
