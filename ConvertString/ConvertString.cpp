
#include <iostream>
#include <string>
#include <map>
#include <cctype>

#define SIZE 10
using namespace std;
string newString(string s);
int main()
{
	
	cout << "Enter a string: ";
	string input;
	cin >> input;

	//const int size = input.length();
	cout << newString(input);
	//map<char, int> temp[size] = {};
}

string newString(string s) {
	string res = "";
	for (int i = 0; i < s.length(); i++) {
		char ch1 = tolower(s[i]);
		int count = 0;
		for (int j = 0; j < s.length(); j++) {
			char ch2 = tolower(s[j]);
			if (ch1 == ch2) {
				count++;
			}
		}
		if (count > 1) {
			res += ')';

		}
		else {
			res += '(';
		}
	}
	return res;
}

