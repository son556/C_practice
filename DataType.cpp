#include <stdio.h>
#define MONTHS 12// ��� ���� 

int main(void)
{
	double monthsalary = 1000.5;
	printf("$ %.2f\n",monthsalary * MONTHS);
	char x = 'A';
	int y = 65; // �ƽ�Ű �ڵ�� A�� ���� 
	printf("%c\n", x);
	printf("%c\n", y);
	printf("%d\n",x);
	
	int z = 100;
	printf("10 ������ ��� %d\n",z);
	printf("8 ������ ��� %o\n",z);
	printf("16 ������ ��� %x\n",z);
//	printf("2 ������ ��� %b\n",z); 2 ������ ���� �������� 
	return 0;
}
