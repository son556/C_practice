#include <stdio.h>

// 전역변수 
int hour;
int minute;
int minuteAdd;

// 시간 구하는 함수 
void counter()
{
	minute += minuteAdd;
	hour += minute/60;
	minute %= 60;
	hour %= 24;
}

// change_function : 특정한 금액을 받아서 가장 적은 거스름돈을 주는 함수 
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
//	printf("시를 입력하세요 : ");
//	scanf("%d", &hour);
//	printf("분을 입력하세요 : ");
//	scanf("%d", &minute);
//	printf("더할 분을 입력하세요 : ");
//	scanf("%d", &minuteAdd);
//	counter();
//	printf("더해진 시간은 %d시 %d분 입니다.\n", hour, minute);
	
	int number;
	printf("금액을 입력하세요 : ");
	scanf("%d", &number);
	printf("최소로 줄 수 있는 화폐의 개수는 %d개 입니다.\n",smallest(number));
	return 0;
}
