#include <stdio.h>

int main(void)
{
	int x = -150;
	if(x < 0)
	{
		x = -x;
	}
	printf("%d\n",x);
	
	int score = 85;
	if(score >= 90)
	{
		printf("����� ������ A�Դϴ�\n");
	}
	else if(score >= 80)
	{
		printf("����� ������ B�Դϴ�\n");
	}
	else if(score >= 70)
	{
		printf("����� ������ C�Դϴ�\n");
	}
	else
	{
		printf("����� ������ F�Դϴ�\n");
	}
	return 0;
}
