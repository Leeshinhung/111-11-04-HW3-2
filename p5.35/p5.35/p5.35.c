#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int t(int b);
int main()
{
	int r;
	for (unsigned long long i = 0;i <= 18446744073709551615;i++) {
		r = t(i);
		printf("%d ", r);
	}
	
	return 0;
}
int t(int b) {
	if (b == 0)
		return 0;
	else if(b == 1)
		return 1;
	return(t(b - 1) + t(b - 2));
}