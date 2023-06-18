// 1 -> 6 -> 12 -> 18 -> 24
//1 ~ 1, 2 ~ 7, 8 ~ 19, 20 ~ 37 
#include <stdio.h>

int main()
{
	int num, count = 1, minus_set = 6, i = 1, value;
	scanf_s("%d", &num);
	num -= 1;
	while (1)
	{
		if (num <= 0)
		{
			break;
		}
		num = num - (minus_set * i);
		count++;
		i++;
	}
	printf("%d", count);
}