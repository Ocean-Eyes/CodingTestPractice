#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;

string solution(string s);

int main()
{
	string Test_s1 = "try hello world";
	string Test_s2 = "welcome to the jungle";
	string TestReturn1, TestReturn2;

	TestReturn1 = solution(Test_s1);
	TestReturn2 = solution(Test_s2);

	cout << "Test_s1을 입력한 결과는 " << endl;

	for (int j = 0; j < TestReturn1.size(); j++)
	{
		cout << TestReturn1[j];
	}

	cout << endl;

	cout << "Test_s2을 입력한 결과는 " << endl;

	for (int k = 0; k < TestReturn2.size(); k++)
	{
		cout << TestReturn2[k];
	}

	return 0;
}

string solution(string s) {
	string answer = "";
	int CountChar = 0;


	for (int i = 0; i < s.size(); i++)
	{
		// if an element is not an space
		if (s[i] != ' ')
		{
		// if an index of element is even number
			if (CountChar % 2 == 0)
			{
				s[i] = toupper(s[i]);				// Convert into capital letter.
			}
		// if an index of element is odd number
			else
			{
				s[i] = tolower(s[i]);				// Convert into small letter.
			}
			CountChar++;
		}
		// if an element is an space, reset the count value.
		else
		{
			CountChar = 0;
		}
	}

	answer = s;

	return answer;
}