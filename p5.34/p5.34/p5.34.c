#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int recursive_f(int m, int n);
int main()
{
	int b, e,r;
	
	printf("輸入底數與次方，中間空格隔開:");
	scanf("%d %d", &b, &e);
	r = recursive_f(b, e);
	printf("%d",r );
	return 0;
}
int recursive_f(int m,int n) {
	int r = m;
	for (int i = 1;i < n;i++) {
		r=r*m;
	}
	return r;
}