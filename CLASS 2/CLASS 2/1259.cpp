#include <stdio.h>

int main()
{
	int num[100000] = { 0 }, n, remainder = 1, count = 0, compare[100000] = { 0 }, constant, x = 0;
	for (;;)
	{
		scanf_s("%d", &n);
		if (n == 0)
		{
			return 0;
		}
		int i = 0;
		while (n!=0)
		{
			remainder = n % 10;
			n = n / 10;
			num[count] = remainder;
			count++;
		}
		count = count - 1;
		constant = count;
		for (int i = 0; i <= constant; i++)
		{
			compare[count] = num[i];
			count--;	
		}
		for (int i = 0; i <= constant; i++)
		{
			if (compare[i] == num[i])
			{
				x = 1;
			}
			else
			{
				x = 0;
				break;
			}
		}
		if (x == 1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		remainder = 1,count=0;
	}
}