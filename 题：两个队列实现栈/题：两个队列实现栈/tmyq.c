#include"tmyq.h"

void StackInit(st* ps) {
	QueueInit(ps->qu1);
	QueueInit(ps->qu2);
}
void StackPush(st* ps, datetype x) {
	if(QueueEmpty(ps->qu2)){
		QueuePush(ps->qu1,x);
	}
	else {
		QueuePush(ps->qu2,x);
	}
}
void StackPop(st* ps) {
	Queue* noempty = ps->qu1;
	Queue* empty = ps->qu2;
	if (QueueEmpty(ps->qu1)) {
		empty = ps->qu1;
		noempty = ps->qu2;
	}
	
	while (noempty->head!=noempty->tail) {
		QueuePush(empty, QueueFront(noempty));
		QueuePop(noempty);
	}
	printf("%d",noempty->head->data);
	QueuePop(noempty);

}