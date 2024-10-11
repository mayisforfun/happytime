#include <stdio.h>
int main()
{
	int a;
	int b;
	int n;

	scanf_s("%d %d", &a,&b);

	if (a > b) { n = a; } else { n = b; };

	while(n >0) {
		n--; 
		if (a % n == 0 && b % n == 0) { printf("%d\n", n); break; }
	};
		return 0;
	}