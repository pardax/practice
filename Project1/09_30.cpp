#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main9()
{
    string n;
    cin >> n;

    vector<char> vec;

    //���� 30����� ����
    for (int i = 0; i < n.size(); i++) {
        vec.push_back(n[i]);
    }
    sort(vec.rbegin(), vec.rend());


    //�� ���� �ڸ� ������ ���� �հ�
    int sum = 0;
    for (int i = 0; i < vec.size() - 1; i++) {
        sum += (int)vec[i] - 48;
    }

    //3�� ������� Ž��
    if (sum % 3 != 0 || ((int)vec[vec.size() - 1] - 48) != 0) {
        cout << "-1";
    }
    else {
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i];
        }
    }

    return 0;
}
