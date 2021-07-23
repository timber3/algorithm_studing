#include <stdio.h>

/**
* @author sh_oh
* @date 21/07/23
* @brief 선택 정렬 알고리즘
* 
* {1 10 5 8 7 6 4 3 2 9}  오름차순으로 정렬
* 1. 버블정렬 사용
* 2. 최소값을 앞으로 이동
* 
*/


// bubble sort 를 활용한 정렬 알고리즘
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

// 최소값을 앞으로 이동
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

// 출력부
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