#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(void)
{
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d�ʴ� %d�� %d�� �Դϴ�.\n",input, minute, second);

//	2 ���� ������  
	
	int x = 0;
	printf("���� x �� %d �Դϴ�.\n",x);
	x++;
	printf("���� x �� %d �Դϴ�.\n",x);
	printf("���� x �� %d �Դϴ�.\n",x--);//x�� ��� �� x �� ���� 
	printf("���� x �� %d �Դϴ�.\n",x);
	printf("���� x �� %d �Դϴ�.\n",--x);//x ���� ���ҽ�Ų �� ���  

//	3 ���մ��Կ����� 
	
	printf("-------------------------------------------\n");
	x = 100;
	printf("���� x �� %d �Դϴ�.\n",x);
	x += 50;
	printf("���� x �� %d �Դϴ�.\n",x);
	x -= 50;
	printf("���� x �� %d �Դϴ�.\n",x);
	x *= 50;
	printf("���� x �� %d �Դϴ�.\n",x);
	x /= 50;
	printf("���� x �� %d �Դϴ�.\n",x);
	x %= 3;
	printf("���� x �� %d �Դϴ�.\n",x);
	return 0;
} 
