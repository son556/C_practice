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
	evenmax = 0;// 초기화 하지 않는 경우 쓰레기값이 들어가 있을 수 있다. 
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
	printf("가장 큰 값은 %d입니다.그리고 %d번째에 있습니다.\n",max, index_max+1);
	printf("가장 작은  값은 %d입니다.그리고 %d번째에 있습니다.\n",min, index_min+1);
	printf("oddmax: %d, evenmax: %d\n", oddmax, evenmax);
	return 0;
}
