#include <stdio.h>
//ºÀÁö´Â 3kg, 5kg 
int main()
{
	int kg, remain_kg, count = 0, share, flag = 0, sum = 0;
	scanf_s("%d", &kg);
	remain_kg = kg;
	if (kg == 3 || kg == 5)
	{
		printf("1");
		return 0;
	}
	else if (kg == 4 || kg == 7)
	{
		printf("-1");
		return 0;
	}
	share = kg / 5;
	remain_kg = kg % 5;
	if (remain_kg == 3)
	{
		share = share + 1;
		printf("%d", share);
	}
	else if (remain_kg == 0)
	{
		printf("%d", share);
	}
	else if (remain_kg == 1 || remain_kg == 4)
	{
		share = share - 1;
		remain_kg = remain_kg + 5;
		share = share + (remain_kg / 3);
		printf("%d", share);
	}
	else if (share > 1 && remain_kg == 2)
	{
		share = share - 2;
		remain_kg = remain_kg + 10;
		share = share + (remain_kg / 3);
		printf("%d", share);
	}
	return 0;
}