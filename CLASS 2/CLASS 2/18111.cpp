#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, M, B;  // ���� ���� �κ��丮
    int ground_block = 0;
    int use_sec = 128000000, use_height = 0;  // ����� ��, ����
    int max_block = 1;
    int present_height = 0;
    vector<vector<int>> ground;
    cin >> N >> M >> B;
    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        for (int j = 0; j < M; j++)
        {
            cin >> ground_block;
            max_block = max(max_block, ground_block);
            temp.push_back(ground_block);
        }
        ground.push_back(temp);
    }
    for (int present_height = max_block; present_height >= 0; present_height--)
    {
        int fill_block = 0;  // ä��� fill
        int count_height_d = 0;  // �ĳ��� dig
        for (int i = 0; i < N; i++)  // ��
        {
            for (int j = 0; j < M; j++)  // ��
            {
                if (present_height < ground[i][j])
                {
                    count_height_d = count_height_d + (ground[i][j] - present_height); // ���� ���̱��� �ĳ���
                }
                else if (present_height > ground[i][j])
                {
                    fill_block = fill_block + (present_height - ground[i][j]); // �ױ�
                }
            }
        }
        int inventory = B + count_height_d;  // �ĳ� �� �κ��丮�� �ֱ�
        int spent_sec = (count_height_d * 2) + fill_block;  // �Ҹ��� �ð��� ��, �ĳ��� �ð� + �ױ� �ð�
        if (fill_block <= inventory)  // ����� ���� ������ �κ��丮 �������� ���� ��
        {
            if (spent_sec < use_sec)
            {
                use_height = present_height;
                use_sec = spent_sec;
            }
        }
    }
    cout << use_sec << " " << use_height;
}
