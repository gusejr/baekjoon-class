#include <stdio.h>
#include <string.h>

int main()
{
	int n, count1 = 0, count2 = 0, sum = 0;
	char s[80];
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		count2 = 0, sum = 0;
		scanf_s("%s", s, sizeof(s));
		int len = strlen(s);
		for (int j = 0; j < len; j++)
		{
			if (s[j] == 'O')
			{
				count2++;
				sum = sum + count2;

			}
			if (s[j] == 'X')
			{
				count2 = 0;
			}

		}
		printf("%d\n", sum);
	}
}
/*python*/
/*number = int(input())
for i in range(0, number):
    a = list(input())
    h = 0
    sum1 = 0
    for j in range(len(a)):
        if a[j] == 'O':
            h = h + 1
            sum1 = sum1 + h
        elif a[j] == 'X':
            h = 0
    print(sum1)*/