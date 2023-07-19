#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 1:  //The same output can be left uninput like this£¬
	case 2:  //and output the result from the last case.
	case 3:
		printf("work day\n");
		break;
	default:  //All cases except for the case condition are output from default
		printf("nothing!\n");//default can be executed anywhere within the function
		break;  
	case 4:
	case 5:
		printf("weekend!\n");
		break;
	}
	return 0;
}