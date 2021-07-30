#include <stdio.h>
#include <stdlib.h>

/**
* @Question ���� 2750��
* @breif N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* @author sh_oh
* @date 21/07/29
* 
*/

void quick_sort(int* arr, int start, int end)
{
	if (start >= end)	// ���� ��� ���Ұ� �ϳ�
		return;

	int i = start +1;	// ���ۺκ�
	int j = end;	// ���κ�
	int pivot = start;	// ������
	while (i <= j)
	{
		if (arr[i] <= arr[pivot])
			i++;
		if (arr[j] >= arr[pivot] && arr[j] >= arr[pivot])
			j--;

		if (i > j)	// i �� j �� ���� �������� ���
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