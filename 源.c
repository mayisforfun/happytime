#include <stdio.h>
int main()
{
	int a= 0;
	int b= 0;
	printf("请输入一个数：");
	scanf_s("%d",&a);
	int ret = 0;

	while (a>0) {

		b = a % 10;
		ret = ret * 10 + b;
		a = a / 10;
	}

	printf("该数的倒序是%d", ret);
		return 0;

}