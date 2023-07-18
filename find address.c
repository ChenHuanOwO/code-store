#include <stdio.h>



int main()
{
	char ch = 'w';
	char* d = &ch;
	*d = 'a';
	printf("%c\n", ch);
	return 0;
}

