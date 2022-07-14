#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(void)
{
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d초는 %d분 %d초 입니다.\n",input, minute, second);

//	2 증감 연산자  
	
	int x = 0;
	printf("현재 x 는 %d 입니다.\n",x);
	x++;
	printf("현재 x 는 %d 입니다.\n",x);
	printf("현재 x 는 %d 입니다.\n",x--);//x를 출력 후 x 값 감소 
	printf("현재 x 는 %d 입니다.\n",x);
	printf("현재 x 는 %d 입니다.\n",--x);//x 값을 감소시킨 후 출력  

//	3 복합대입연산자 
	
	printf("-------------------------------------------\n");
	x = 100;
	printf("현재 x 는 %d 입니다.\n",x);
	x += 50;
	printf("현재 x 는 %d 입니다.\n",x);
	x -= 50;
	printf("현재 x 는 %d 입니다.\n",x);
	x *= 50;
	printf("현재 x 는 %d 입니다.\n",x);
	x /= 50;
	printf("현재 x 는 %d 입니다.\n",x);
	x %= 3;
	printf("현재 x 는 %d 입니다.\n",x);
	return 0;
} 
