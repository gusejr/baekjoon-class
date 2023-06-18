#include <stdio.h>

int main()
{
	int n, x = 0, y = 0, sum, sum1 = 0, source = -1, i;
	scanf_s("%d", &n);
	for (i = 1; i <= 1000000; i++)
	{
		sum = 0;
		y = i;
		while (y > 0)
		{
			x = y % 10;
			y = y / 10;
			sum = sum + x;
		}
		sum1 = i + sum;
		if (n == sum1)
		{
			source = i;
			break;
		}
	}
	if (source == -1)
	{
		source = 0;
	}
	printf("%d", source);
}