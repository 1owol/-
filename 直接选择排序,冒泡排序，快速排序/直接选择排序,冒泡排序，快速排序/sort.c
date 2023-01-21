#include"sort.h"
//直接选择排序
void StraightSelectSort(int* a, int n) {
	//int i;
	//int j;
	//int end = n - 1;
	//int p=0;
	////证明是否进行了交换 若没有进行交换则该数组已经完成了排序
	//int sort = 0;
	//for (j = 0; j < n; j++) {
	//	sort = 0;
	//	for (i = 0; i < n - j-1; i++) {
	//		p = i;
	//		if (a[i] < a[i + 1]) {
	//			p = i + 1;
	//			sort = 1;
	//		}
	//		
	//	} 
	//	int temp = a[end];
	//	a[end] = a[p];
	//	a[p] = temp;
	//	end--;
	//	if (!sort) {
	//		break;
	//	}
	//}

	int i, j;
	int max=0;
	int end = n - 1;
	for (j = 0; j < n-1; j++) {
		for (i = 0; i < n - j - 1; i++) {
			if (i == 0) {
				max = i;
			}
			if (a[max] < a[i + 1]) {
				max = i + 1;
			}
		}
		int temp = a[end];
		a[end] = a[max];
		a[max] = temp;
		end--;
	}
}
//冒泡排序
void BubbleSort(int* a, int n) {
	int i, j;
	int sort = 0;
	for (j = 0; j < n-2; j++) {
		sort = 0;
		for (i = 0; i < n - 1-j; i++) {
			if (a[i] > a[i + 1]) {
				int temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
				sort = 1;
			}
		}
		if (!sort) {
			break;
		}
	}
}

//快速排序优化 三数取中
int MidNumber(int* a, int left, int right) {
	int leftnumber = a[left];
	int rightnumber = a[right];
	int mid = (left + right) / 2;
	int midnumber = a[mid];
	if (leftnumber > rightnumber) {
		if (rightnumber > midnumber) {

			return right;
		}
		if (midnumber > rightnumber) {
			if (midnumber > leftnumber) {
				return left;
			}
			else {
				return mid;
			}
		}
	}
	else {
		if (leftnumber > midnumber) {
			return left;
		}
		else {
			if (midnumber < rightnumber) {
				return mid;

			}
			else {
				return right;
			}
		}
	}

}


//快速排序（挖坑法）
// 假设数组为a[10]
//left为数组起始 一开始为0
//right为数组终点 一开始为9
void QuickSort1(int* a, int left,int right) {
	if (left >= right) {
		return;
	}

	//小区间优化
	//if ((right - left + 1) < 10) {
	//	//直接插入排序
	//	//insertsort()
	//}
	//else {
	//	//快速排序
	//}
	
	int begin = left;
	int end = right;
	int pivot = left;

	//优化
	int mid = MidNumber(a, left, right);
	int key = a[mid];
	a[mid] = a[left];
	//未优化
	//int key= a[left];

	while (begin <end) {
		while (begin < end && a[end] >=key) {
			end--;
		}
			a[pivot] = a[end];
			pivot = end;
		while(begin <end&&a[begin] <=key) {
			begin++;
		}
			a[pivot] = a[begin];
			pivot = begin;
	}
	a[pivot] = key;
	QuickSort1(a, left, pivot-1);
	QuickSort1(a, pivot+1, right);
}

//快速排序（交换法）
void QuickSort2(int* a, int left, int right) {
	if (left >= right) {
		return;
	}
	int begin = left;
	int end = right;
	/*int mid = MidNumber(a, left, right);
	int key = a[mid];
	a[mid] = a[left];*/
	int key = a[left];

	while (begin < end) {
		while (begin < end && a[end] >= key) {
			end--;
		}
		while (begin < end && a[begin] <= key) {
			begin++;
		}
		int temp = a[end];
		a[end] = a[begin];
		a[begin] = temp;
	}
	int temp=a[end];
	a[end] = key;
	a[left] = temp;

	QuickSort2(a, left, end - 1);
	QuickSort2(a, end + 1, right);
}

//快速排序（快慢指针法）
void QuickSort3(int* a, int left, int right) {
	if (left >= right) {
		return;
	}
	//前指针
	int cur = left;
	//后指针
	int prev = left;
	int key = a[left];

	while (cur <= right) {
		if (a[cur] < key) {
			prev++;
			int temp = a[prev];
			a[prev] = a[cur];
			a[cur] = temp;
		}
		cur++;
	}
	int temp = a[prev];
	a[prev] = key;
	a[left] = temp;


	QuickSort3(a, left, prev-1);
	QuickSort3(a, prev + 1, right);
}
