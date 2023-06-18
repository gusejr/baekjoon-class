#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a < b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    int number;
    vector<int> vector_number;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        vector_number.push_back(number);
    }
    sort(vector_number.begin(), vector_number.end(), compare);
    for (int num : vector_number)
    {
        cout << num << "\n";
    }
}