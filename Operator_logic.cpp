#include <stdio.h>
#include <math.h>// pow(), abs()

int main(void)
{
	int x = 50, y = 30;
	printf("x�� y���� ũ�� y�� 40�̸��Դϱ�? %d\n", (x > y)&&(y < 40));
	printf("x�� y���� �۰ų� y�� 30�Դϱ�? %d\n", (x < y) || (y == 30));
	printf("x�� 50�� �ƴմϱ�? %d\n", x != 50);
	
	x = -50, y = -30;
	int absoluteX = (x > 0) ? x : -x;
	int max = (x > y) ? x:y;
	int min = (x < y) ? x:y;
	printf("absoute x : %d\n", absoluteX);
	printf("x �� y�� �� �� ū����? %d\n",max);
	printf("x �� y�� �� �� ��������? %d\n",min);
	double xi = pow(2.0, 20.0);
	printf("2^20 = %.2f",xi);
	
	return 0;
}
