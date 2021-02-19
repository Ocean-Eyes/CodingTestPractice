#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

int solution(int n, vector<int> lost, vector<int> reserve);

int main()
{

	int n1 = 5;
	int n2 = 5;
	int n3 = 3;

	vector<int> TestLost1 = { 2,4 };
	vector<int> TestLost2 = { 2,4 };
	vector<int> TestLost3 = { 3 };
	vector<int> TestReserve1 = { 1,3,5 };
	vector<int> TestReserve2 = { 3 };
	vector<int> TestReserve3 = { 1 };

	int TestReturn1, TestReturn2, TestReturn3;

	TestReturn1 = solution(n1, TestLost1, TestReserve1);
	cout << "TestReturn1으로 반환" << endl;
	TestReturn2 = solution(n2, TestLost2, TestReserve2);
	cout << "TestReturn2으로 반환" << endl;
	TestReturn3 = solution(n3, TestLost3, TestReserve3);
	cout << "TestReturn3으로 반환" << endl;

	cout << TestReturn1 << endl;
	cout << TestReturn2 << endl;
	cout << TestReturn3 << endl;

	return 0;
}

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	int recipient = 0;

	vector<int>::iterator IterOwn;
	vector<int>::iterator IterMinus;
	vector<int>::iterator IterPlus;

	for (unsigned int i = 0; i < lost.size(); i++)
	{
		IterOwn = find(reserve.begin(), reserve.end(), lost[i]);
		IterMinus = find(reserve.begin(), reserve.end(), lost[i] - 1);
		IterPlus = find(reserve.begin(), reserve.end(), lost[i] + 1);

		// if someone who lost training wear have their own additional training wear.
		if (IterOwn != reserve.end())
		{
			cout << "자기 자신이 존재할 때의 조건문 진입" << endl;
			cout << "자기 자신이 있으면 카운트 한다" << endl;
			reserve.erase(reserve.begin() + i);
			recipient++;
		}

		// if only -1 exists
		if ((IterMinus != reserve.end()) && (IterPlus == reserve.end()))
		{
			cout << "-1만 존재할 때의 조건문 진입" << endl;

			cout << lost[i] << "의 -1만 존재하므로 카운트" << endl;
			recipient++;

		}
		// if only +1 exists
		else if ((IterMinus == reserve.end()) && (IterPlus != reserve.end()))
		{
			cout << "+1만 존재할 때의 조건문 진입" << endl;

			if ((*(IterPlus)+1) == lost[i] + 2)
			{
				cout << lost[i] << "의 +2도 존재하므로 건너뜀" << endl;
				continue;
			}
			else
			{
				cout << lost[i] << "의 +1만 존재하므로 카운트" << endl;
				recipient++;
			}
		}
		// if -1 and +1 both exist
		else if ((IterMinus != reserve.end()) && (IterPlus != reserve.end()))
		{
			cout << "-1과 +1이 둘 다 존재할 때의 조건문 진입" << endl;
			cout << lost[i] << "의 -1과 +1이 모두 존재하므로 한번만 카운트" << endl;
			recipient++;

		}
	}

	answer = n - lost.size() + recipient;
	return answer;
}