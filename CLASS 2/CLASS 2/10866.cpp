#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    deque<int> deq;
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int number;
        string type;
        cin >> type;
        if (type == "push_front")
        {
            cin >> number;
            deq.push_front(number);
        }
        if (type == "push_back")
        {
            cin >> number;
            deq.push_back(number);
        }
        if (type == "pop_front")
        {
            if (deq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << deq.front() << '\n';
                deq.pop_front();
            }
        }
        if (type == "pop_back")
        {
            if (deq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
        }
        if (type == "size")
        {
            cout << deq.size() << '\n';
        }
        if (type == "empty")
        {
            if (deq.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        if (type == "front")
        {
            if (deq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << deq.front() << '\n';
            }
        }
        if (type == "back")
        {
            if (deq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << deq.back() << '\n';
            }
        }
    }
}