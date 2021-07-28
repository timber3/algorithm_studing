#include <stdio.h>

/**
* @breif �� ���� �˰���
* @author sh_oh
* @date 21/07/25
* 
* 3,7,8,1,5,9,6,10,2,4
*/


void quick_sort(int* arr, int start, int end)
{

	if (start == end)	// ������ ������ 1�� ���
		return;
	if (start >= 10 || end < 0)
		return;

	int key = start; // �ǹ��� ( ������ �Ǵ� �� ) �� key �� ������� ù��° ���ҷ� ����
	int i = start + 1;	// ���� �������
	int j = end;	// ������ ��� ����
	int temp;

	while (i <= j)
	{
		while (arr[i] <= arr[key])
			i++;
		while ((arr[j] >= arr[key]) && j > key)
			j--;

		if (i > j)
		{
			temp = arr[j];
			arr[j] = arr[key];
			arr[key] = temp;
		}
		else
		{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}

	quick_sort(arr, start, j);
	quick_sort(arr, j+1, end);
}

int main()
{
	int arr[10] = { 3,7,8,1,5,9,6,10,2,4 };
	int number = 10;

 	quick_sort(arr, 0, 9);

	for (int i = 0; i < 10; i++)
		printf(" %d ", arr[i]);

	return 0;
}