#include <stdio.h>
#include <string.h>
// 배열은 포인터와 흡사한 구조를 가짐 
// 포인터 주소 [1,2,3,4,5] 라고 하고 array[5]가 있다고 가정
// array[2] = 7 -> &array[2] = 3(array[2]의 주소) 
int main(void)
{
	char input[2];// 사용자가 hello를 입력한경우 h e l l o \0(null)
	//설정한 길이보다 더 많은 값을 넣어도 오류가 안남(why?) 
	gets(input);// 문자 입력후 enter를 누르면 input에 문자 입력
	int count = 0;
	while(input[count] != '\0')
	{
		count++;
	}
	printf("입력한 문자열의 길이는 %d입니다.\n",count);
	printf("입력한 문자열은 %s 입니다.",input);
	
	char inputs[5] = "Love";
	printf("문자열의 길이 : %d\n",strlen(inputs));
	
	char inputone[5] = "A";
	char inputtwo[5] = "B";
	// strcmp(a1, a2) 두 문자중 사전적으로  a1이 앞:-1. a2가 앞:1, 동일:0 
	printf("문자열 비교 : %d\n", strcmp(inputone, inputtwo));
	
	char inps[11] = "i love you";
	char result[5] = "Love";
	strcpy(result, inps);
	printf("문자열 복사 : %s\n", result);
	return 0;
}
