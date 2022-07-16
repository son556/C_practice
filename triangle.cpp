#include <stdio.h>
#define N 20
int main(void)
{
	int i,j,k;
	for(i=0;i<N;i++)
	{
		for(k=i;k<N;k++)
		{
			printf(" ");
		} 
		for(j=2*i+1;j>0;j--)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}
