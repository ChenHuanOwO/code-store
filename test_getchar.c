#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	char ch;
	printf("�������ַ���");
	scanf("%c\n", &ch);
	printf("%c", getchar());  //getchar()������ȡ���ַ���δ��ʹ�õĵ�һλ�ַ�,
	                          //ch��ȡһ���ַ�����getchar��ȡscanf��������ĵ�
	                          //�����ַ�
	return 0;
}

