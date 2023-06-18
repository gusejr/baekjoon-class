#include <stdio.h>

int main()
{
	int a, b, c, num[10] = { 0 };
	int sum1 = 0, sum = 0, count = 0, n;
	scanf_s("%d %d %d", &a, &b, &c);
	sum1 = a * b * c;
	while (sum1 != 0)
	{
		n = sum1 / 10;
		sum = sum1 % 10;
		sum1 = n;
		num[sum]++;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
}