#include"heapsort.h"

//С��
//���µ����㷨
void ShiftDown(int* a,int n,int root) {
	int parent = root;
	//leftchild=parent*2+1
	//rightchild=parent*2+1
	//parent=��child-1��/2
	int child = parent * 2 + 1;
	while (child<n) {
		
		if (child+1<n&&a[child] > a[child+1]) {
			child++;
		}
		if (a[parent] > a[child]) {
			int temp = a[parent];
			a[parent] = a[child];
			a[child] = temp;
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}

void HeapSort(int* a, int n){
	int i;
	//ʹ��ȫ���������С��
	for (i = (n - 1)/2; i >= 0; i--) {
		ShiftDown(a, n, i);
	}
	//ʹС�ѱ�ɽ�������
	for (i = n - 1; i >= 0; i--) {
		int temp;
		temp = a[i];
		a[i] = a[0];
		a[0] = temp;
		n--;
		ShiftDown(a, n, 0);
	}

}