#include <stdio.h>


int main(void)
{
//	계산기 
	char o;
	int x, y;
	while(1)
	{
		printf("수식을 입력하세요.\n");
		scanf("%d %c %d", &x, &o, &y);
		if(o == '+')
		{
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		else if(o == '-')
		{
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}
		else if(o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}
		else if(o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}
		else if(o == '%')
		{
			printf("%d %c %d = %d\n", x, o, y, x % y);
		}
		else
		{
			printf("입력이 잘못 되었습니다.\n");
		}
		
		getchar();// 버퍼 
		printf("프로그램을 종료하시겠습니까? (y/n)");
		scanf("%c", &o);
		if (o == 'n' || o == 'N')
		{
			continue;
		}
		else if (o == 'y' || o == 'Y')
		{
			break;
		}
	}
	return 0;
}
