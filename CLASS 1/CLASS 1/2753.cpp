#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	if (n % 4 == 0 && 0 != n % 100)
	{
		printf("1");
	}
	else if (0 == n % 400)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
/*python*/
/*year = int(input())
if year % 4 == 0 and year % 100 != 0:
    print("1")
elif year % 4 == 0 and year % 400 == 0:
    print("1")
else:
    print("0")
*/