#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> B_board = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };
vector<string> W_board = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N; // �� 
    int M; // ��
    int count_B = 0;
    int count_W = 0;
    int min_count = 100;
    int min_time = 100;
    string board;
    vector<string> board_color;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> board;
        board_color.push_back(board);
    }
    for (int z = 0; z < N; z++)  // ��ü ��
    {
        if (z + 8 > N)  // ��ü �� �ʰ�
        {
            break;
        }
        for (int k = 0; k < M; k++) //��ü ��
        {
            if (k + 8 > M)  // ��ü �� �ʰ�
            {
                break;
            }
            for (int i = z; i < z + 8; i++) // �� 8*8
            {
                for (int j = k; j < k + 8; j++) // �� 8*8
                {
                    if (board_color[i][j] != B_board[i - z][j - k])   // ���� ��� B �� ���
                    {
                        count_B++;
                    }
                }
                for (int j = k; j < k + 8; j++)
                {
                    if (board_color[i][j] != W_board[i - z][j - k])   // ���� ��� W �� ���
                    {
                        count_W++;
                    }
                }
            }
            min_count = min(count_W, count_B);
            min_time = min(min_count, min_time);
            count_B = 0;
            count_W = 0;
        }
    }
    cout << min_time << '\n';
}