#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> paper;
int total_count[3] = { 0 };

bool is_all_same_paper(int row, int column, int area)
{
    for (int i = row; i < row + area; i++)
    {
        for (int j = column; j < column + area; j++)
        {
            if (paper[row][column] != paper[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
void solve(int area, int row, int column)  // �� ���� ����, �ش� ������ ù��° ��, �ش� ������ ù��° ��
{// �ش� ������ ���̰� ��� ������ Ȯ��
    int count = 0;
    
    if (is_all_same_paper(row, column, area))
    {// �ش� ������ ���ڰ� ��� ���� ���
        total_count[paper[row][column] + 1]++;
        return;
    }
    int plus = area / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            solve(plus, row + plus * i, column + plus * j);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    int piece_of_paper;
    cin >> N;    
    for (int i = 0; i < N; i++)
    {
        vector<int> v;
        for (int j = 0; j < N; j++)
        {
            cin >> piece_of_paper;
            v.push_back(piece_of_paper);
        }
        paper.push_back(v);
    }
    solve(N, 0, 0);
    cout << total_count[0] << '\n';
    cout << total_count[1] << '\n';
    cout << total_count[2] << '\n';
}