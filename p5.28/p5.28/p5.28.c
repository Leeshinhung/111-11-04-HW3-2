#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a,b;

	printf("Input a string to convert to lower case\n");
	a = getchar();
	b = a + 32;
	


	printf("The string in lower case: %c\n", b);

	return  0;
}