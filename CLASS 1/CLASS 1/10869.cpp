#include <stdio.h>

int main()
{
	int a, b, sum = 0;
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	sum = a - b;
	printf("%d\n", sum);
	sum = a * b;
	printf("%d\n", sum);
	sum = a / b;
	printf("%d\n", sum);
	sum = a % b;
	printf("%d\n", sum);

	return 0;
}