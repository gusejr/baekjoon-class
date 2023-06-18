#include <stdio.h>

int main()
{
	int sum = 0;
	int value = 0, old_value = 0, prepare = 0;
	int card_count, card_sum_max, card_number[100] = { 0 };
	scanf_s("%d %d", &card_count, &card_sum_max);
	for (int i = 0; i < card_count; i++)
	{
		scanf_s("%d", &card_number[i]);
	}
	for (int i = 0; i < card_count; i++)
	{
		for (int j = i + 1; j < card_count; j++)
		{
			for (int k = j + 1; k < card_count; k++)
			{
				value = card_number[i] + card_number[j] + card_number[k];
				if (card_sum_max - old_value > card_sum_max - value)
				{
					if (card_sum_max - value >= 0)
					{
						old_value = value;
					}
				}
				
			}
		}
	}
	printf("%d", old_value);
}