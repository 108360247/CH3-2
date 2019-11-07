#include <stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main()
{
	unsigned int  n ;
	printf("Enter the number of terms: ");
	scanf_s("%u", &n);
	printf("Fibonacci Series(%u): ",n);
	
	printf("%u ", fibonacci(n));
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	int i;
	unsigned long long int result = 0,t1=0, t2 = 0;
	
	if (n == 0)
	{
		result = 0;
	}
	if (n == 1)
	{
		result = 1;
	}
	if ((n >= 2) && (n <= 93))
	{
		result = 1;
		t1 = 0;
		t2 = 1;
		for (i = 1; i < n; i++)
		{
			result = t1 + t2;
			if (i % 2 == 1)
			{
				t1 = result;
			}
			else if (i % 2 == 0)
			{
				t2 = result;
			}
		}
	}
	if (n > 93)
	{
		printf("fibonacci(%u)>2^64-1, exceeding the calculation range.\n", n);
	}
	return result;
}
