#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main13()
{
    int t;
    cin >> t;

    vector<int> vec;

    for (int i = 0; i < t; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    for (int i = 0; i < vec.size(); i++) {
        bool array[vec[i] + 1]; //9

        //테이블 초기화
        fill_n(array, vec[i] + 1, 1);

        //소수 필터링
        for (int j = 2; j * j <= vec[i]; j++) {
            if (array[j]) {
                for (int k = j * j; k <= vec[i]; k += j)
                    array[k] = false;
            }
        }
        //TestCase
        // j = 8/2, 3, 2, 1
        // 3 && 8-3

        // j = 10/2, 4, 3, 2, 1
        // 5 && 10-5

        // j = 16/2, 7, 6, 5, 4, 3, 2, 
        // 7 && 16-7

        for (int j = vec[i] / 2; j > 0; j--) {
            if (array[j] && array[vec[i] - j]) {
                cout << j << ' ' << vec[i] - j << '\n';
                break;
            }
        }
    }


    return 0;
}