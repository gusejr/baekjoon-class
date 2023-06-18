#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string input;
    vector<char> sentence;
    while (1)
    {
        sentence.clear();
        getline(cin, input);
        if (input == ".")
        {
            break;
        }
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == '(' || input[i] == '[')
            {
                sentence.push_back(input[i]);
            }
            else if (input[i] == ')')
            {
                if (sentence.back() == '(')
                {
                    sentence.pop_back();
                }
                else
                {
                    sentence.push_back(input[i]);
                }
            }
            else if (input[i] == ']')
            {
                if (sentence.back() == '[')
                {
                    sentence.pop_back();
                }
                else
                {
                    sentence.push_back(input[i]);
                }
            }
        }
        if (sentence.size() == 0)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }
}