#include <stdio.h>

struct point {
	int x;
	int y;
};

void comparePoint(struct point p1, struct point p2) {
	if(p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1 equal p2");
	}
}

int main(void)
{
	struct point p1;
	struct point p2;
	
	p1.x = 30;
	p1.y = 10;
	
	p2.x = 30;
	p2.y = 10;
//	if(p1 == p2) -> error 구조체 타입이 같아도 비교는 불가능 
	
	comparePoint(p1, p2);
	return 0;
}
