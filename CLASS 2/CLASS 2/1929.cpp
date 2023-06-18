#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int M;
	int N;
	cin >> M >> N;
	vector<bool> prime(N + 1, true);
	prime[1] = false;
	for (int k = 2; k * k <= N; k++)
	{
		if (prime[k] == true)
		{
			for (int i = k * k; i <= N; i += k)
			{
				prime[i] = false;
			}
		}
	}
	for (int i = M; i <= N; i++)
	{
		if (prime[i] == true)
		{
			cout << i << '\n';
		}
	}
}