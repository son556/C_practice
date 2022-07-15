#include <stdio.h>
#include <math.h>// pow(), abs()

int main(void)
{
	int x = 50, y = 30;
	printf("x가 y보다 크고 y는 40미만입니까? %d\n", (x > y)&&(y < 40));
	printf("x가 y보다 작거나 y는 30입니까? %d\n", (x < y) || (y == 30));
	printf("x가 50이 아닙니까? %d\n", x != 50);
	
	x = -50, y = -30;
	int absoluteX = (x > 0) ? x : -x;
	int max = (x > y) ? x:y;
	int min = (x < y) ? x:y;
	printf("absoute x : %d\n", absoluteX);
	printf("x 와 y값 중 더 큰값은? %d\n",max);
	printf("x 와 y값 중 더 작은값은? %d\n",min);
	double xi = pow(2.0, 20.0);
	printf("2^20 = %.2f",xi);
	
	return 0;
}
