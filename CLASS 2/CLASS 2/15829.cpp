#include <stdio.h>
//�Է� �� ���� r=26 ^   M=1234567891 ������ ��, a = 97, 31 �� �� �� ���� ���������
int main()
{
	int L, newL, division;
	long long sum = 0, newnum = 0;
	char arr[51] = { 0 };
	scanf_s("%d %s", &L, arr, sizeof(arr));
	for (int i = 0; i < L; i++) //���ڿ� ����
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
		for (int j = 0; j < i - 1; j++)  //31 ���ϱ�
		{
			newnum = newnum * 31;
			newnum = newnum % 1234567891;
		}
		sum = sum + newnum;
		sum = sum % 1234567891;
	}
	printf("%lld", sum);
}