#include <stdio.h>

int main()
{
	int n, primenumber[101] = { 0 }, delnum[1001] = { 0 }, mul = 0, count = 0, idx, sum = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &primenumber[i]);  //�Է¹���
		idx = primenumber[i];  //�Է¹����� �Ű���
		delnum[idx]++;
	}
	for (int i = 2; i <= 1000; i++)
	{
		for (int j = 2; j <= 1000; j++)
		{
			mul = i * j;
			if (mul > 1000)
			{
				mul = 0;

			}
			delnum[mul] = 0;
		}
	}
	for (int i = 0; i <= 1000; i++)
	{
		delnum[0] = 0;
		delnum[1] = 0;
		if (delnum[i] > 0)
		{
			sum = sum + delnum[i];
		}
	}
	printf("%d", sum);
}