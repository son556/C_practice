#include <stdio.h>
#define NUMBER 5
#include <limits.h>// INT_MAX 

int main(void)
{
	int i, max, min, index_max, index_min, oddmax, evenmax, idx_odd, idx_even;
	int array[NUMBER];
	max = 0;
	min = INT_MAX;
	index_max = 0;
	index_min = 0;
	idx_odd = 0;
	idx_even = 0;
	evenmax = 0;// �ʱ�ȭ ���� �ʴ� ��� �����Ⱚ�� �� ���� �� �ִ�. 
	oddmax = 0;
	// array[0] ~ array[4]
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index_max = i;
		}
		if(min > array[i])
		{
			min = array[i];
			index_min = i;
		}
		if(array[i]%2 == 0)
		{
			if(evenmax < array[i])
			{
				evenmax = array[i];
				idx_even = i;
			}
		}
		else
		{
			if(oddmax < array[i])
			{
				oddmax = array[i];
				idx_odd = i;
			}
		}
	}
	printf("���� ū ���� %d�Դϴ�.�׸��� %d��°�� �ֽ��ϴ�.\n",max, index_max+1);
	printf("���� ����  ���� %d�Դϴ�.�׸��� %d��°�� �ֽ��ϴ�.\n",min, index_min+1);
	printf("oddmax: %d, evenmax: %d\n", oddmax, evenmax);
	return 0;
}
