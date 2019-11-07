#include <stdio.h>
#include <stdlib.h>

long int a(int base, int exponent);

int main(void)
{
	int base, exponent;

	printf("base:\n");
	scanf_s("%d", &base);
	printf("exponent:\n");
	scanf_s("%d", &exponent);
	printf("Ans=%d",a(base, exponent));

	system("pause");
	return 0;
}

long int a(int base, int exponent)
{
	if (exponent > 1)
	{
		long int result = base * a(base, exponent - 1);
	}
	else if (exponent == 1)
	{
		return base;
	}
}