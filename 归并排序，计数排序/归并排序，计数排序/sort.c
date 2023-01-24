#include"sort.h"
void _MergeSort(int* a,int left,int right,int* temp) {
	if (left >= right) {
		return;
	}

	int mid = (left + right) / 2;
	_MergeSort(a, left, mid, temp);
	_MergeSort(a, mid+1, right, temp);
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1<=end1&&begin2<=end2) {
		if (a[begin1] > a[begin2]) {
			temp[index] = a[begin2];
			index++;
			begin2++;
		}
		else {
			temp[index] = a[begin1];
			index++;
			begin1++;
		}
	}
	if (begin1 <= end1) {
		while (begin1 <= end1) {
			temp[index] = a[begin1];
			begin1++;
			index++;
		}
	}
	if (begin2 <= end2) {
		while (begin2 <= end2) {
			temp[index] = a[begin2];
			begin2++;
			index++;
		}
	}
	int i;
	for (i = left; i <= right; i++) {
		a[i] = temp[i];
	}
}

//归并排序
void MergeSort(int* a,int n) {

	int* temp = (int*)malloc(sizeof(int) * n);
	_MergeSort(a,0,n-1,temp);

	free(temp);
}

//计数排序
void CountingSort(int* a,int n) {
	int i;
	int j = 0;
	int max, min;
	max = a[0];
	min = a[0];
	for (i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	int* temp = (int*)malloc(sizeof(int) * (max-min+1));
	printf("%d", (max - min + 1));
	memset(temp, 0, (max - min + 1)*sizeof(int));
	for (i = 0; i < n; i++) {
		temp[(a[i]-min)]++;
	}

	for (i = 0; i < (max - min + 1); i++) {
		while (temp[i] != 0) {
			a[j] = i + min;
			j++;
			temp[i]--;
		}
	}
	
	free(temp);

}


void _MergeSort1(int* a, int n, int* temp) {
	int gap=1;
	int i;
	int j;
	while (gap <n) {
		for (i = 0; i < n; i += 2 * gap) {
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			int index = i;
			
			//过程中右半区间不存在
			if (begin2>=n) {
				break;
			}
			//过程中右半区间算多了
			if (end2 >= n) {
				end2 = n - 1;
			}


			while (begin1 <= end1 && begin2 <= end2) {
				if (a[begin1] > a[begin2]) {
					temp[index] = a[begin2];
					index++;
					begin2++;
				}
				else {
					temp[index] = a[begin1];
					index++;
					begin1++;
				}
			}
			if (begin1 <= end1) {
				while (begin1 <= end1) {
					temp[index] = a[begin1];
					begin1++;
					index++;
				}
			}
			if (begin2 <= end2) {
				while (begin2 <= end2) {
					temp[index] = a[begin2];
					begin2++;
					index++;
				}
			}

			for (j = 0; j <= end2; j++) {
				a[j] = temp[j];
			}

		}
		
		gap *= 2;
	}
	

}


//归并排序(非递归)
void MergeSort1(int* a, int n) {
	int* temp = (int*)malloc(sizeof(int) * n);
	_MergeSort1(a, n, temp);

	free(temp);
}