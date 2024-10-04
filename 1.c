#include <stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int t=0;
		do { int d=n%10;
	t = t * 10 + d;
	n /= 10;
	} while (n != 0);
		n = t;
	do { int d=n%10;
	printf("%d", d);
	if (n>= 10) { printf(" "); }
	n/= 10;
	} 
	while (n> 0);
	
	return 0;
}