#include <stdio.h>

// �ݺ� �Լ� �̿��ؼ� ���� �Ƕ�̵� ��� 

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

// ��� �Լ��� �̿��Ͽ� Ư�� ���ڿ� ���
void print_R(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("���ڿ��� ����մϴ�.\n");
		print_R(count - 1);
	}
}

// ����Լ��� �̿��Ͽ� ���ձ��ϱ� 

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
	printf("���ڿ��� ��� ����ұ��?\n");
	scanf("%d", &count);
	print_R(count);
	scanf("%d %d", &n, &r);
	printf("%d", nCr(n,r));
	return 0;
}
