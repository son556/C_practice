#include <stdio.h>
#include <string.h>
// �迭�� �����Ϳ� ����� ������ ���� 
// ������ �ּ� [1,2,3,4,5] ��� �ϰ� array[5]�� �ִٰ� ����
// array[2] = 7 -> &array[2] = 3(array[2]�� �ּ�) 
int main(void)
{
	char input[2];// ����ڰ� hello�� �Է��Ѱ�� h e l l o \0(null)
	//������ ���̺��� �� ���� ���� �־ ������ �ȳ�(why?) 
	gets(input);// ���� �Է��� enter�� ������ input�� ���� �Է�
	int count = 0;
	while(input[count] != '\0')
	{
		count++;
	}
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.\n",count);
	printf("�Է��� ���ڿ��� %s �Դϴ�.",input);
	
	char inputs[5] = "Love";
	printf("���ڿ��� ���� : %d\n",strlen(inputs));
	
	char inputone[5] = "A";
	char inputtwo[5] = "B";
	// strcmp(a1, a2) �� ������ ����������  a1�� ��:-1. a2�� ��:1, ����:0 
	printf("���ڿ� �� : %d\n", strcmp(inputone, inputtwo));
	
	char inps[11] = "i love you";
	char result[5] = "Love";
	strcpy(result, inps);
	printf("���ڿ� ���� : %s\n", result);
	return 0;
}
