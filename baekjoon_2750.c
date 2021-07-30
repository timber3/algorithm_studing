#include <stdio.h>
#include <stdlib.h>

/**
* @Question 백준 2750번
* @breif N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
* @author sh_oh
* @date 21/07/29
* 
*/

void quick_sort(int* arr, int start, int end)
{
	if (start >= end)	// 같을 경우 원소가 하나
		return;

	int i = start +1;	// 시작부분
	int j = end;	// 끝부분
	int pivot = start;	// 기준점
	while (i <= j)
	{
		if (arr[i] <= arr[pivot])
			i++;
		if (arr[j] >= arr[pivot] && arr[j] >= arr[pivot])
			j--;

		if (i > j)	// i 과 j 가 서로 교차했을 경우
		{
			int temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}

		else	
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}

	}

	quick_sort(arr, start, j);
	quick_sort(arr, j + 1 , end);

}

void print_arr(int* arr, int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("%d\n",arr[i]);
	}
}

int main()
{
	int N;
	scanf("%d", &N);

	int* arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);


	quick_sort(arr, 0, N-1);

	print_arr(arr, N);

	return 0;
}