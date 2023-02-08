#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main4() {

	string s = "4 -1 3 -5";

	string temp;

	vector<int> vec;
	
	for(int i = 0; i < s.size(); i++) {
		if (s[i] == ' ')
		{
			vec.push_back(atoi(temp.c_str()));
			temp.clear();
		}
		else
			temp += s[i];
	}
	vec.push_back(atoi(temp.c_str()));

	sort(vec.begin(), vec.end());


	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << "/";
	}

	cout << endl << s.size();
	



	return 0;
}