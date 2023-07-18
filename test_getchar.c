#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	char ch;
	printf("请输入字符：");
	scanf("%c\n", &ch);
	printf("%c", getchar());  //getchar()函数仅取用字符内未被使用的第一位字符,
	                          //ch拿取一个字符，故getchar获取scanf函数输入的第
	                          //二个字符
	return 0;
}

