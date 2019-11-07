#include <stdio.h>
#include <stdlib.h>

int cd(int a, int b);

int main(void)
{
	int a, b, lcm;
	printf("Please input two integers:\n");
	scanf_s("%d %d", &a, &b);
	lcm = a * b / cd(a, b);
	printf("%d is the LCM of[%d,%d]\n", lcm, a, b);

	system("pause");
	return 0;
};
int cd(int a, int b)
{
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
