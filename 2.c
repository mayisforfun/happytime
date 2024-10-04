
#include <stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	int ovo = 0;
	for (i = 2; i < n; i++) { if (n % i == 0) { ovo = 1; } }
	if (ovo == 1) { printf("这个数不是质数"); }
	else { printf("这个数是质数"); }
	return 0;

}
/* {
	int i=1, n=1;
	int fact=1;
	scanf_s("%d", &n);
	for (i = n;i > 0; i--);{ fact *= i; }
	printf("%d!=%d",n,fact );
	return 0;

}*/


/* {
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	return 0;
}*/
