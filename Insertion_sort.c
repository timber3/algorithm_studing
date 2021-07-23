#include <stdio.h>

/**
* @brief 삽입 정렬 알고리즘
* @author sh_oh
* @date 21/07/24
* 
* 오름차순으로 정렬
* 
* 삽입 알고리즘은 거의 정렬이 되어있는 상태에서는 가장 빠른 수행 속도를 보여준다.
* 연산 수행 횟수또한 적어지므로 효율적이지만
* 최악의 경우 O(n*n)의 시간복잡도를 가짐.
*/

int main()
{
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };

	int i, j,tmp;

	for (i = 0; i < 9; i++)
	{
		j = i;
		while (arr[j] > arr[j+1])
		{
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;

			j--;
		}
	}

	printf("arr = {");
	for ( int i = 0 ; i < 10 ; i ++)
	printf(" %d ", arr[i]);
	printf("}\n");


	return 0;
}