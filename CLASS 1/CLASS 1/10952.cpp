#include <stdio.h>

int main()
{
	int x, y, sum = 0;


	for (int i = 0;; i++)
	{
		scanf_s("%d %d", &x, &y);
		if (x == 0 || y == 0)
		{
			break;
		}
		sum = x + y;
		printf("%d\n", sum);
	}

}