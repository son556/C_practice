#include <stdio.h>
#define N 10
#define M 20
int main(void)
{
//	윤년판별하기 
	int year = 2016;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);
	}else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
	
	int i = 1, sum = 0;
	while(i <= 1000)
	{
		sum = sum + i;
		i++;
	}
	printf("1 부터 1000까지의 합은 %d입니다.\n",sum);
	
//	사각형 별찍기 
	int j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("★");
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
