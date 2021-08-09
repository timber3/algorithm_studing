#include <stdio.h>

/**
* @brief ���� ���� �˰���
* @author sh_oh
* @date 21/08/02
* 
* 7, 6, 5, 8, 3, 5, 9, 1
*/

int number = 8;
int sorted[8];

void merge(int arr[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;
	while (i <= middle && j <= n)
	{
		if (arr[i] <= arr[j])
		{
			sorted[k] = arr[i];
			i++;
		}
		else {
			sorted[k] = arr[j];
			j++;
		}
		k++;
	}

	// i �� middle ���� ���ų� j�� n ���� ���� ���� �ϳ��� �� ���� �������� �� ���� ��� ������ ����

	if (i > middle)
	{
		for (int t = j; t <= n; t++)
		{
			sorted[k] = arr[t];
			k++;
		}
	}
	else if( j > n ) 
	{
		for (int t = i; t <= middle; t++)
		{
			sorted[k] = arr[t];
			k++;
		}
	}
	// sorted �迭�� ���ִ� ���ҵ��� ������ arr �Լ��� �ٽ� �̵�
	for (int t = m; t <= n; t++)
	{
		arr[t] = sorted[t];
	}
}

void merge_sort(int arr[], int m, int n)
{
	if (m < n)
	{
		int middle = (m + n) / 2;
		merge_sort(arr, m, middle);
		merge_sort(arr, middle + 1, n);
		merge(arr, m, middle, n);
	}
}


int main()
{
	int data[] = { 7, 6, 5, 8, 3, 5, 9, 1 };
	merge_sort(data, 0, number-1);

	for (int i = 0; i <= 7; i++)
	{
		printf("[%d] ", data[i]);
	}

	return 0;

}