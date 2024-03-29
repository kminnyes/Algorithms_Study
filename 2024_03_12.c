//백준 2217
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n;
	int w;

	scanf_s("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n); 

	for (int i=0; i< n; i++) {
		scanf_s("%d", &w);
		arr[i] = w;
	}//동적배열

	qsort((void*)arr, n, sizeof(int), compare);

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}// 정렬


	int max =0;
	int temp = 0;
	for (int i = 0; i < n; i++) {
		temp = arr[i] * (n - i);
		if (temp > max) {
			max = temp;
		}
	}

	printf("\n%d", max);




	free(arr);
	return 0;
}

