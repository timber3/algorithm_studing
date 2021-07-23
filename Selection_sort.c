#include <stdio.h>

/**
* @author sh_oh
* @date 21/07/23
* @brief ���� ���� �˰���
* 
* {1 10 5 8 7 6 4 3 2 9}  ������������ ����
* 1. �������� ���
* 2. �ּҰ��� ������ �̵�
* 
*/


// bubble sort �� Ȱ���� ���� �˰���
void bubble_sort(int* item)
{
	int temp;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - (i + 1); j++)

			if (item[j] > item[j + 1])
			{
				temp = item[j];
				item[j] = item[j + 1];
				item[j + 1] = temp;
			}

	}

}

// �ּҰ��� ������ �̵�
void min_first(int *item)
{

	int temp;

	for (int i = 0; i < 10; i++)
	{
		int min = 100;
		int index;
		for (int j = i; j < 10; j++)
		{
			if (min > item[j])
			{
				min = item[j];
				index = j;
			}
		}

		temp = item[index];
		item[index] = item[i];
		item[i] = temp;
	}
}

// ��º�
void print_item(int* item)
{
	printf(" item = {");

	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", item[i]);
	}

	printf("}\n");
}

int main()
{
	int item[] = { 1,10,5,8,7,6,4,3,2,9 };
	//bubble_sort(item);
	min_first(item);
	print_item(item);

	return 0;
}