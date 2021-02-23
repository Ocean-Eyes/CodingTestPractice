#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::max_element;
using std::min_element;
using std::swap;

vector<int> solution(vector<int> answers);

int main()
{
	vector<int> TestAnswers1 = { 1,2,3,4,5 };
	vector<int> TestAnswers2 = { 1,3,2,4,2 };
	vector<int> TestAnswers3 = { 1,4,1,4,2 };
	vector<int> TestAnswers4 = { 3,5,2,4,2,5,4,2,1,5,3,3,2 };
	vector<int> TestReturn1, TestReturn2, TestReturn3, TestReturn4;

	TestReturn1 = solution(TestAnswers1);
	TestReturn2 = solution(TestAnswers2);
	TestReturn3 = solution(TestAnswers3);
	TestReturn4 = solution(TestAnswers4);

	for (unsigned int l = 0; l < TestReturn1.size(); l++)
	{
		cout << TestReturn1[l] << " ";
	}

	cout << endl;
	cout << "TestReturn1 출력" << endl;

	for (unsigned int m = 0; m < TestReturn2.size(); m++)
	{
		cout << TestReturn2[m] << " ";
	}

	cout << endl;
	cout << "TestReturn2 출력" << endl;

	for (unsigned int n = 0; n < TestReturn3.size(); n++)
	{
		cout << TestReturn3[n] << " ";
	}

	cout << endl;
	cout << "TestReturn3 출력" << endl;

	for (unsigned int p = 0; p < TestReturn4.size(); p++)
	{
		cout << TestReturn4[p] << " ";
	}

	cout << endl;
	cout << "TestReturn4 출력" << endl;

	return 0;
}

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	vector<int> student1 = { 1,2,3,4,5 };
	vector<int> student2 = { 2,1,2,3,2,4,2,5 };
	vector<int> student3 = { 3,3,1,1,2,2,4,4,5,5 };
	vector<int> count = { 0, 0, 0 };
	int max_index, max_value;

	for (unsigned int i = 0; i < answers.size(); i++)
	{
		if (answers[i] == student1[i % 5])
		{
			count[0]++;
		}

		if (answers[i] == student2[i % 8])
		{
			count[1]++;
		}

		if (answers[i] == student3[i % 10])
		{
			count[2]++;
		}
	}
	
	max_index = max_element(count.begin(), count.end()) - count.begin();
	max_value = *max_element(count.begin(), count.end());

	// There are 2 or 3 same scores.
	if((count[0] == count[1]) || (count[1] == count[2]) || (count[2] == count[0]))
	{
		// All students get same scores.
		if ((count[0] == count[1]) && (count[1] == count[2]) && (count[2] == count[0]))
		{
			answer = { 1, 2, 3 };
		}
		// 2 students get same maximum scores.
		else
		{
			for (unsigned int j = 0; j < count.size(); j++)
			{
				if (max_value == count[j])
				{
					answer.push_back(j + 1);
				}
			}
		}
	}
	// There's no same score.
	else
	{
		answer.push_back(max_index + 1);
	}

	return answer;
}