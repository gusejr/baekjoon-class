#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count_arr[10001] = { 0 };
	int N, input_num;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &input_num);
		count_arr[input_num]++;
	}
	for (int i = 1; i <= 10000; i++)
	{
		count_arr[i] = count_arr[i - 1] + count_arr[i];
	}
	for (int i = 1; i <= 10000; i++)
	{
		int num = count_arr[i] - count_arr[i - 1];
		for (int j = 0; j < num; j++)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}