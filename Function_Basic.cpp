#include <stdio.h>

// �������� 
int hour;
int minute;
int minuteAdd;

// �ð� ���ϴ� �Լ� 
void counter()
{
	minute += minuteAdd;
	hour += minute/60;
	minute %= 60;
	hour %= 24;
}

// change_function : Ư���� �ݾ��� �޾Ƽ� ���� ���� �Ž������� �ִ� �Լ� 
int smallest(int number)
{
	int count = 0;
	while(number >= 50000)
	{
		number -= 50000;
		count ++;
	}
	while(number >= 10000)
	{
		number -= 10000;
		count ++;
	}
	while(number >= 5000)
	{
		number -= 5000;
		count ++;
	}
	while(number >= 1000)
	{
		number -= 1000;
		count ++;
	}
	while(number >= 500)
	{
		number -= 500;
		count ++;
	}
	while(number >= 100)
	{
		number -= 100;
		count ++;
	}
	while(number >= 50)
	{
		number -= 50;
		count ++;
	}
	while(number >= 10)
	{
		number -= 10;
		count ++;
	}
	return count;
}
int main(void)
{
//	printf("�ø� �Է��ϼ��� : ");
//	scanf("%d", &hour);
//	printf("���� �Է��ϼ��� : ");
//	scanf("%d", &minute);
//	printf("���� ���� �Է��ϼ��� : ");
//	scanf("%d", &minuteAdd);
//	counter();
//	printf("������ �ð��� %d�� %d�� �Դϴ�.\n", hour, minute);
	
	int number;
	printf("�ݾ��� �Է��ϼ��� : ");
	scanf("%d", &number);
	printf("�ּҷ� �� �� �ִ� ȭ���� ������ %d�� �Դϴ�.\n",smallest(number));
	return 0;
}
