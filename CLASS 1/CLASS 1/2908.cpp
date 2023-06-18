#include <stdio.h>

int obversion(int a)
{
	int x, y, sum = 0, n = 100, z;
	for (int i = 0; i < 3; i++)
	{
		y = a % 10;
		a = a / 10;
		while (n > 0)
		{
			z = y * n;
			sum = sum + z;
			n = n / 10;
			break;
		}
	}
	return sum;
}
int num()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	a = obversion(a);
	b = obversion(b);
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	printf("%d", num());
}
/*python*/
/*number1, number2 = map(str, input().split())
new_number1 = ''.join(list(reversed(number1)))
new_number2 = ''.join(list(reversed(number2)))
print(max(int(new_number1), int(new_number2)))*/