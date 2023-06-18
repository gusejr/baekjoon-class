#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int order_count = 0;

void divide(int board_side, int com_r, int com_c)
{
    if (board_side == 1)
    {
        return;
    }
    int half_side = board_side / 2;
    if (com_r < half_side && com_c >= half_side)  // 2 ��и�
    {
        order_count = order_count + (board_side * board_side / 4);
        divide(half_side, com_r, com_c - half_side);
    }
    else if (com_r >= half_side && com_c < half_side)  // 3 ��и�
    {
        order_count = order_count + (board_side * board_side / 4) * 2;
        divide(half_side, com_r - half_side, com_c);
    }
    else if (com_r >= half_side && com_c >= half_side)  // 4 ��и�
    {
        order_count = order_count + (board_side * board_side / 4) * 3;
        divide(half_side, com_r - half_side, com_c - half_side);
    }
    divide(half_side, com_r, com_c);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int board_size; // N^2 ���� ũ��
    int r, c;  // �� ��
    int N;
    
    cin >> N >> r >> c;
    board_size = pow(2, N);
    //board_size = 2 << N;  // ����
    //board_size = 2 >> N;  // 2�� ������
    divide(board_size, r, c);
    cout << order_count;
}