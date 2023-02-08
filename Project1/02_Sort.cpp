#include <iostream>

using namespace std;

int main2() {

	int n;
	cin >> n;

	int arr[1000];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + 1 == n)
				break;
			int temp;
			if (arr[j + 1] < arr[j]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}