#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string solution(string s) {

	vector<string> vec;
	string temp;

	//ºÐ¸®
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ') {
			temp += s[i];
			vec.push_back(temp);
			temp.clear();
		}
		else {
			temp += s[i];
		}
	}
	vec.push_back(temp);


	//convert lower alphabet
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[i].size(); j++)
		{
			if (isupper(vec[i][j]) || islower(vec[i][j])) { // is that alphabet
				if (isupper(vec[i][j]))
					vec[i][j] = (char)(int)vec[i][j] + 32;
			}
		}
	}
	//convert head alphabet to upper
	for (int i = 0; i < vec.size(); i++) {
		if (isupper(vec[i][0]) || islower(vec[i][0])) { // is that alphabet
			vec[i][0] = (char)(int)vec[i][0] - 32;
		}
	}

	string answer = "";

	for (int i = 0; i < vec.size(); i++) {
		answer += vec[i];
	}

	return answer;
}
int main5() {

	cout << solution("3people   unFollowed me");
	return 0;
}