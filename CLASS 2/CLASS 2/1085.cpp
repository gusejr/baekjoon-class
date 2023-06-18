#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x;
	int y;
	int w;
	int h;
	int minimum_path;
	int sub_x;
	int sub_y;
	int min_value = 0;
	cin >> x >> y >> w >> h;
	sub_x = w - x;
	sub_y = h - y;
	if (x == 1 || y == 1)
	{
		cout << 1;
		return 0;
	}
	minimum_path = min(sub_x, sub_y);
	min_value = min(x, y);
	if (min_value <= minimum_path)
	{
		cout << min_value;
	}
	else
	{
		cout << minimum_path;
	}
}