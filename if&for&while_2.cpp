#include <stdio.h>
#define N 10
#define M 20
int main(void)
{
//	�����Ǻ��ϱ� 
	int year = 2016;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d���� �����Դϴ�.\n", year);
	}else
	{
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
	
	int i = 1, sum = 0;
	while(i <= 1000)
	{
		sum = sum + i;
		i++;
	}
	printf("1 ���� 1000������ ���� %d�Դϴ�.\n",sum);
	
//	�簢�� ����� 
	int j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("��");
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
