#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    int x;
    int y;
    vector<pair<int, int>> coordinates;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        coordinates.push_back(make_pair(x, y));
    }
    sort(coordinates.begin(), coordinates.end());
    for (pair<int, int> coordinate : coordinates)
    {
        cout << coordinate.first << " " << coordinate.second << "\n";
    }
}