#include <stdio.h>

int main()
{
	int a;
	int n;
	scanf_s("%d", &n);
	int max = -1000000;
	int min = 1000000;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		if (a > max)
		{
			max = a;
		}
		if (a < min)
		{
			min = a;
		}
	}


	printf("%d %d", min, max);
	return 0;
}