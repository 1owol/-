#include"queue.h"
int main() {
	 Queue q;
	 QueueInit(&q);
	 QueuePush(&q, 1);
	 QueuePush(&q, 2);
	 QueuePush(&q, 3);
	 
	 printf("��ǰ�����Ϊ%d ", QueueSize(&q));

	 printf("ͷ�����Ϊ%d ", QueueFront(&q));
	 QueuePop(&q);
	 QueuePush(&q, 4);
	 QueuePop(&q);
     QueuePop(&q);

	 printf("ͷ�����Ϊ%d ",QueueFront(&q));
	 printf("β�����Ϊ%d ", QueueBack(&q));

	 if (QueueEmpty(&q)) {
		 printf("��ǰ����Ϊ��");
	 }
	 else {
		 printf("��ǰ���в�Ϊ��");
	 }
	 QueuePop(&q);

	 if (QueueEmpty(&q)) {
		 printf("��ǰ����Ϊ��");
	 }
	 else {
		 printf("��ǰ���в�Ϊ��");
	 }
	return 0;
}