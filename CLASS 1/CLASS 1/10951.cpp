#include <stdio.h>

int main()
{
	int a, b, sum = 0;
	while (scanf_s("%d %d", &a, &b) != EOF)
	{
		sum = a + b;
		printf("%d\n", sum);
	}
}