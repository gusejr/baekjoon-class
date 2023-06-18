#include <stdio.h>

int main()
{
	int t, h, w, n, room[100], count = 0, give = 0;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf_s("%d %d %d", &h, &w, &n);
		for (int j = 1; j <= w; j++)
		{
			for (int k = 1; k <= h; k++)  //(k*100)+j
			{
				count++;
				if (count == n)
				{
					give = (k * 100) + j;
					printf("%d\n", give);
					break;
				}
			}			
		}
		count = 0;
		give = 0;
	}
}