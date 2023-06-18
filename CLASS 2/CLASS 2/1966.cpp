#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<pair<int, int>> printer;
    int print_time; // ���̽� �Է� Ƚ��
    int documents, location; // ���� �� ��, ���� ��ġ 
    int important; // ���� �߿䵵
    cin >> print_time;
    for (int i = 0; i < print_time; i++)
    {
        int order = 0; // ���ϴ� ������ ��� �� ����
        printer.clear();
        cin >> documents >> location;
        for (int j = 0; j < documents; j++)
        {
            cin >> important;
            printer.push_back(make_pair(j, important));
        }
        while (documents != 0)
        {
            int max_imp = 0;
            for (int i = 0; i < printer.size(); i++)
            {
                max_imp = max(max_imp, printer[i].second); // �ִ� �߿䵵 ���� ã��
            }
            for (int k = 0; k < documents; k++)
            {
                if (documents == 1) // ���� �� �� ���� ��
                {
                    break;
                }
                if (max_imp != printer[0].second)  // �ִ� �߿䵵 ���� ������ ��������
                {
                    printer.push_back(printer[0]);
                    printer.erase(printer.begin());
                }
            }
            order++;
            if (location == printer[0].first)  // ���ϴ� ������ ���� ���
            {
                cout << order << '\n';
                printer.erase(printer.begin());
                break;
            }
            else
            {
                printer.erase(printer.begin());
                documents = documents - 1;
            }
        }
    }
}