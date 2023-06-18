#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	double N, number;
	double sum = 0, average;
	double max = 0;
	cin >> N;
	vector<double> score;
	for (int i = 0; i < N; i++)
	{
		cin >> number;
		score.push_back(number);
		if (number > max)
		{
			max = number;
		}
	}
	for (double a : score)
	{
		sum = sum + (a / max * 100);
	}
	average = sum / N;
	cout << average;
}