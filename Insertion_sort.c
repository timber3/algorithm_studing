#include <stdio.h>

/**
* @brief ���� ���� �˰���
* @author sh_oh
* @date 21/07/24
* 
* ������������ ����
* 
* ���� �˰����� ���� ������ �Ǿ��ִ� ���¿����� ���� ���� ���� �ӵ��� �����ش�.
* ���� ���� Ƚ������ �������Ƿ� ȿ����������
* �־��� ��� O(n*n)�� �ð����⵵�� ����.
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