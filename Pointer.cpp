#include <stdio.h>

// 두 변수의 값을 서로 변환하는 포인터 함수 
void swap(int *x, int *y)
{
	printf("swap *x : %d\n", *x);
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// 두 변수의 값은 swap_2 내에서만 바뀌고 main에 영향을 못줌(point 필요) 
void swap_2(int x, int y)
{
	printf("swap_2_input x=%d, y=%d\n", x, y);
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swap_2 result x=%d, y=%d\n", x, y);
}

int main(void)
{
	int x = 1;
	int y = 2;
	swap(&x, &y);
	printf("x = %d\ny = %d\n",x, y);
	swap_2(x, y);
	printf("swap_2 x=%d y=%d\n",x, y);
	printf("\n");
	
	int i = 10;
	int *p;
	p = &i;
	printf("i = %d\n",i);
	*p = 20;
	printf("i = %d\n",i);
	return 0;
}
