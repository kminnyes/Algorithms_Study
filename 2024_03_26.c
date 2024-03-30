//3rd week Two pointer น้มุ 2470
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void) {

	int N;
	scanf("%d", &N);

	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	qsort(arr, N, sizeof(int), compare);


	int sum = 0;
	int left = 0;
	int right = N-1;
	int left_result = arr[left]; 
	int right_result =arr[right];
	int ans = arr[left] + arr[right];

	for (;left!=right;) {
		sum = arr[left] + arr[right];
		if (abs(sum) < abs(ans)) {
			ans = sum;
			left_result = arr[left];
			right_result = arr[right];
		
		}

		if (sum > 0) {
			--right;
		}
		else {
			++left;
		}
	}

	printf("%d %d", left_result, right_result);

	return 0;

}