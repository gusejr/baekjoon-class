#include <stdio.h>
//입력 값 수열 r=26 ^   M=1234567891 나누는 값, a = 97, 31 곱 할 때 마다 나눠줘야함
int main()
{
	int L, newL, division;
	long long sum = 0, newnum = 0;
	char arr[51] = { 0 };
	scanf_s("%d %s", &L, arr, sizeof(arr));
	for (int i = 0; i < L; i++) //문자열 증가
	{
		newL = arr[i] - 96;
		if (i == 0)
		{
			sum = sum + newL * 1;
			sum = sum % 1234567891;
		}
		else
		{
			newnum = int(newL) * 31;
			newnum = newnum % 1234567891;
		}
		for (int j = 0; j < i - 1; j++)  //31 곱하기
		{
			newnum = newnum * 31;
			newnum = newnum % 1234567891;
		}
		sum = sum + newnum;
		sum = sum % 1234567891;
	}
	printf("%lld", sum);
}