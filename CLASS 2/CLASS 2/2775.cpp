#include <stdio.h>

int main()
{
	int t, k, n, room[15] = { 0 }, sum = 0, people = 0;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf_s("%d %d", &k, &n);
		for (int l = 1; l <= 14; l++)
		{
			room[l] = l;
		}
		for (int j = 0; j < k; j++)
		{
			sum = 0;
			for (int q = 1; q <= n; q++)
			{
				sum = sum + room[q];
				room[q] = sum;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
}