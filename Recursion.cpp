#include <stdio.h>

// 반복 함수 이용해서 숫자 피라미드 출력 

int print(int a)
{
	int i,j;
	for(i = 0; i < a; i ++)
	{
		for(j = 0; j <=i; j++)
		{
			printf("%d ", j+1);
		}
		printf("\n");
	}
}

// 재귀 함수를 이용하여 특정 문자열 출력
void print_R(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("문자열을 출력합니다.\n");
		print_R(count - 1);
	}
}

// 재귀함수를 이용하여 조합구하기 

int nCr(int n, int r)
{
	if(r==0 || r == n)
	{
		return 1;
	}
	else
	{
		return nCr(n-1, r-1) + nCr(n-1,r);
	}
} 

int main(void)
{
	int a;
	int count;
	int n, r;
	scanf("%d", &a);
	print(a);
	printf("문자열을 몇번 출력할까요?\n");
	scanf("%d", &count);
	print_R(count);
	scanf("%d %d", &n, &r);
	printf("%d", nCr(n,r));
	return 0;
}
