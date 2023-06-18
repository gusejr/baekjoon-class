#include <iostream>
using namespace std;
// 0 = 48
int main()
{
	int count;
	int sum = 0;
	const int size = 101;
	char number[size];
	cin >> count >> number;
	//cin >> number;
	for (int i = 0; i < count; i++)
	{
		sum = sum + (number[i] - 48);
	}
	cout << sum;
}