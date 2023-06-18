#include <stdio.h>

int main()
{
	int n, count = 0, max = 0;
	for (int i = 1; i <= 9; i++)
	{
		scanf_s("%d", &n);

		if (n > max)
		{

			max = n;
			count = i;
		}

	}
	printf("%d\n%d", max, count);


	return 0;
}