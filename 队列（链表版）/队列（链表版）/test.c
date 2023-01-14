#include"queue.h"
int main() {
	 Queue q;
	 QueueInit(&q);
	 QueuePush(&q, 1);
	 QueuePush(&q, 2);
	 QueuePush(&q, 3);
	 
	 printf("当前结点数为%d ", QueueSize(&q));

	 printf("头结点数为%d ", QueueFront(&q));
	 QueuePop(&q);
	 QueuePush(&q, 4);
	 QueuePop(&q);
     QueuePop(&q);

	 printf("头结点数为%d ",QueueFront(&q));
	 printf("尾结点数为%d ", QueueBack(&q));

	 if (QueueEmpty(&q)) {
		 printf("当前队列为空");
	 }
	 else {
		 printf("当前队列不为空");
	 }
	 QueuePop(&q);

	 if (QueueEmpty(&q)) {
		 printf("当前队列为空");
	 }
	 else {
		 printf("当前队列不为空");
	 }
	return 0;
}