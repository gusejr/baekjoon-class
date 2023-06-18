#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    string input_word;
    set<string> word;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> input_word;
        word.insert(input_word);
    }
    vector<string> word_vector(word.begin(), word.end());
    sort(word_vector.begin(), word_vector.end(), compare);
    for (string word : word_vector)
    {
        cout << word << "\n";
    }
}