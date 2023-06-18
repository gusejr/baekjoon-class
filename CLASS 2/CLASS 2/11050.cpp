#include <stdio.h>

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return(n * factorial(n - 1));
	}
}
int main()
{
	int n, k, total1, total2, total3, newtotal, sum = 0;
	scanf_s("%d %d", &n, &k);
	sum = n - k;
	total1 = factorial(n), total2 = factorial(k), total3 = factorial(sum);
	newtotal = total1 / (total2 * total3);
	printf("%d", newtotal);

	return 0;
}