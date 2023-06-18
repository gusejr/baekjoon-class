#include <stdio.h>

int main()
{
	int n, x, y;
	scanf_s("%d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &y);
		if (y < x)
		{
			printf("%d ", y);
		}
	}

	return 0;
}
