#include <stdio.h>

int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);

	if (y - 45 >= 0)
	{
		printf("%d %d", x, y - 45);
	}
	else if (y - 45 < 0)
	{
		x = x - 1;
		if (x < 0)
		{
			x = x + 24;
		}
		printf("%d %d", x, y - 45 + 60);
	}

	return 0;
}