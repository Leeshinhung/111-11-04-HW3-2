#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, temp, c;
	printf("two integers(中間要空格):");
	scanf("%d %d", &a, &b);
	if (a > b) {
		temp = b;
		b = a;
		a = temp;
	}
	c = a * b;
	for (int i = c;i < 9999999999999999;i++) {
		if (c%a == 0 && c%b == 0) {
			printf("LCM is %d", c);
			break;
		}
	}
	return 0;
}