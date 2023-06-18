#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N; // 입력 개수, 범위 -> 중복 없음
    vector<int> st, numbers;  // 스택, 수열
    vector<int> complete_numbers; // 완성된 수열
    vector<int> N_num;  // 1부터 N 까지
    vector<char> signal;  //
    cin >> N;
    for (int i = 1; i <= N; i++)  // 입력된 수열 입력
    {
        int num;
        cin >> num;
        complete_numbers.push_back(num);
        N_num.push_back(i);  // 1 ~ N
    }
    int input_count = 0;
    while (input_count < N)  // 완성된 수열
    {
        for (int j = 0; j < N; j++) // 1 ~ N 
        {
            if (st.size() != 0 && complete_numbers[input_count] == st.back())
            {
                numbers.push_back(st.back());
                st.pop_back();
                signal.push_back('-');
                input_count = input_count + 1;
                break;
            }
            else if(N_num.size() != 0)
            {
                st.push_back(N_num[0]);
                N_num.erase(N_num.begin());
                signal.push_back('+');
            }
            else
            {
                input_count = input_count + 1;
            }
        }
    }
    if (st.size() != 0)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < signal.size(); i++)
        {
            cout << signal[i] << '\n';
        }
    }
}