#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    int age;
    string name;
    vector<pair<int, string>> information;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        information.push_back(make_pair(age, name));
    }
    stable_sort(information.begin(), information.end(), compare);
    for (pair<int, string> info : information)
    {
        cout << info.first << " " << info.second << "\n";
    }
}