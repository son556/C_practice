#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &number);
	for(i = 0; i < number; i++)
	{
		printf("������ ���� �Է��ϼ��� : ");
		scanf("%d", &x);
		sum += x;
	}
	printf("���� ������ ���� %d �Դϴ�.\n", sum);
	
//	Ư�� ������ ��� 
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &x);
	for(i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", x, i, x*i);
	}
	return 0;
}
