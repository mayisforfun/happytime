#include <stdio.h>
int main()
{
	int a= 0;
	int b= 0;
	printf("������һ������");
	scanf_s("%d",&a);
	int ret = 0;

	while (a>0) {

		b = a % 10;
		ret = ret * 10 + b;
		a = a / 10;
	}

	printf("�����ĵ�����%d", ret);
		return 0;

}