#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int num1 = 10; //computer will converse the bases by itself.
	printf("num1 = %d , num2 = %o , num3 = %x\n", num1, num1, num1);
	printf("num1 = %d , num2 = %#o, num3 = %#x", num1, num1, num1);
	return 0;
}