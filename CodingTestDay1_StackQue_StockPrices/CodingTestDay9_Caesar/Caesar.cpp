#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

string solution(string s, int n);

int main()
{
	string Test_s1 = "AB";
	string Test_s2 = "z";
	string Test_s3 = "a B z";
	int Test_n1 = 1;
	int Test_n2 = 1;
	int Test_n3 = 4;
	string Test_result1, Test_result2, Test_result3;

	cout << Test_s1 << endl;
	cout << Test_s2 << endl;
	cout << Test_s3 << endl;

	Test_result1 = solution(Test_s1, Test_n1);
	Test_result2 = solution(Test_s2, Test_n2);
	Test_result3 = solution(Test_s3, Test_n3);

	cout << Test_result1 << endl;
	cout << Test_result2 << endl;
	cout << Test_result3 << endl;

	return 0;
}

string solution(string s, int n) {
	string answer = "";
	vector<int> temp;

	for (int i = 0; i < s.size(); i++)
	{
		temp.push_back(static_cast<int>(s[i]));
	}

	for (int i = 0; i < temp.size(); i++)
	{
		cout << temp[i] <<" ";
	}

	cout << endl;

	for (int j = 0; j < temp.size(); j++)
	{
		// space
		if (temp[j] == 32)
		{
			answer.push_back(static_cast<char>(temp[j]));
		}
		// A ~ B
		else if ((temp[j] > 64) && (temp[j] < 91))
		{
			if ((temp[j] + n) > 90)
			{
				cout << "Z보다 커짐" << endl;
				answer.push_back(static_cast<char>(temp[j] + n - 26)); // temp[j] + n - 90 + 64
			}
			else
			{
				cout << "A~Z 이내" << endl;
				answer.push_back(static_cast<char>(temp[j] + n));
			}
		}
		// a ~ b
		else if ((temp[j] > 96) && (temp[j] < 123))
		{
			if ((temp[j] + n) > 122)
			{
				cout << "z보다 커짐" << endl;
				answer.push_back(static_cast<char>(temp[j] + n - 26)); // temp[j] + n - 122 + 96
			}
			else
			{
				cout << "a~z 이내" << endl;
				answer.push_back(static_cast<char>(temp[j] + n));
			}
		}
	}

	return answer;
}