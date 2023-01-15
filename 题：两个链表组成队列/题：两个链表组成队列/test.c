#include"stack.h"
#include"tmyq.h"
int main() {
	qu q;
	st st1;
	st st2;
	q.stack1 = &st1;
	q.stack2 = &st2;
	QueueIint(&q);
	QueuePush(&q, 5);
	QueuePush(&q, 1);
	printf("当前队列中数的个数为%d ", QeueuSize(&q));
	QueuePush(&q, 2);
	QueuePop(&q);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	printf("当前队列中数的个数为%d ", QeueuSize(&q));
	QueuePop(&q);
	return 0;
}