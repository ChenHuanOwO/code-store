#include <stdio.h>

int main()
{
	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("%d\n", sizeof(d));
	return 0;
}