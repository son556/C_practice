#include <stdio.h>
#define MONTHS 12// 상수 정의 

int main(void)
{
	double monthsalary = 1000.5;
	printf("$ %.2f\n",monthsalary * MONTHS);
	char x = 'A';
	int y = 65; // 아스키 코드로 A를 뜻함 
	printf("%c\n", x);
	printf("%c\n", y);
	printf("%d\n",x);
	
	int z = 100;
	printf("10 진수로 출력 %d\n",z);
	printf("8 진수로 출력 %o\n",z);
	printf("16 진수로 출력 %x\n",z);
//	printf("2 진수로 출력 %b\n",z); 2 진수는 직접 만들어야함 
	return 0;
}
