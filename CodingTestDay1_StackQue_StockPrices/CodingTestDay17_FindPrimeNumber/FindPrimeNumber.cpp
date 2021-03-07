// 못 푼 문제. 보류
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sqrt;
using std::find;

int solution(int n);

int main()
{
	int Test_n1 = 10;
	int Test_n2 = 5;/*
	int Test_n3 = 100;*/
	int TestReturn1, TestReturn2/*, TestReturn3*/;

	TestReturn1 = solution(Test_n1);
	TestReturn2 = solution(Test_n2);/*
	TestReturn3 = solution(Test_n3);*/

	cout << TestReturn1 << endl;
	cout << TestReturn2 << endl;/*
	cout << TestReturn3 << endl;*/

	return 0;
}

int solution(int n)
{
	int answer = 0;
	vector<int> temp;

	for (int i = 2; i <= n; i++)
	{
		temp.push_back(i);
	}

	for (int i : temp)
	{
		
		cout << i << "의 배수를 제거하기 시작" << endl;

		if (i > sqrt(n))
		{
			cout << i << "가 " << sqrt(n) << "보다 커졌으므로 for문 탈출" << endl;
			break;
		}

		for (unsigned int j = (find(temp.begin(), temp.end(), i) - temp.begin()); j < temp.size();)
		{
			
			if (temp[j] == i)
			{
				j++;
			}
			else if (temp[j] % i != 0)
			{
				j++;
			}
			else if (temp[j] % i == 0)
			{
				temp.erase(temp.begin() + j);
				
				for (unsigned int k = 0; k < temp.size(); k++)
				{
					cout << temp[k] << " ";
				}

				cout << endl;
			}
		}
	}

	answer = temp.size();

	return answer;
}