#include <stdio.h>

int main()
{
	int num1, num2, big, small, value, remainder = 0, newnum = 0;
	scanf_s("%d %d", &num1, &num2);
	if (num1 == num2)
	{
		printf("%d\n%d", num1, num2);
		return 0;
	}
	else if (num1 > num2)
	{
		big = num1;
		small = num2;
	}
	else
	{
		big = num2;
		small = num1;
	}
	while (1)  //최대공약수
	{
		if (big % small == 0)
		{
			remainder = small;
			break;
		}
		else
		{
			newnum = big;
			remainder = big % small;
			big = small;
			small = remainder;
		}
	}
	printf("%d\n%d", remainder, num1 * num2 / remainder);
}