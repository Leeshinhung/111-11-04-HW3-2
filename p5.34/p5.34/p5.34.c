#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int recursive_f(int m, int n);
int main()
{
	int b, e,r;
	
	printf("��J���ƻP����A�����Ů�j�}:");
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