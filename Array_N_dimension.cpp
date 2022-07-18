#include <stdio.h>


int main(void)
{
	int i, j;
	int gugudan[10][10];
	int score[5][2];
	int total[2] = {0, };//모든 공간에 0을 할당 
	for(i = 1; i<10; i++)
	{
		printf("\n[ %d단]\n\n", i);
		for(j = 1; j <= 9; j++)
		{
			gugudan[i][j] = i*j;
			printf("%d X %d = %d\n", i, j, gugudan[i][j]);
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		printf("%d반 학생의 수학, 영어 점수 : ",i+1);
		scanf("%d %d",&score[1][0], &score[1][1]);
		
	}
	
	for(i = 0; i < 5; i++)
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("5명의 수학점수 합계 : %d\n", total[0]);
	printf("5명의 영어점수 합계 : %d\n", total[1]);
	return 0;
}
