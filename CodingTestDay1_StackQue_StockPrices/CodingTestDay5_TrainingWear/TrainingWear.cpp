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
	int n4 = 6;
	int n5 = 5;

	vector<int> TestLost1 = { 2,4 };
	vector<int> TestLost2 = { 2,4 };
	vector<int> TestLost3 = { 3 };
	vector<int> TestLost4 = { 4,5 };
	vector<int> TestLost5 = { 1,2,3 };
	vector<int> TestReserve1 = { 1,3,5 };
	vector<int> TestReserve2 = { 3 };
	vector<int> TestReserve3 = { 1 };
	vector<int> TestReserve4 = { 5,6 };
	vector<int> TestReserve5 = { 1,2,3 };

	int TestReturn1, TestReturn2, TestReturn3, TestReturn4, TestReturn5;

	TestReturn1 = solution(n1, TestLost1, TestReserve1);
	cout << "TestReturn1으로 반환" << endl;
	TestReturn2 = solution(n2, TestLost2, TestReserve2);
	cout << "TestReturn2으로 반환" << endl;
	TestReturn3 = solution(n3, TestLost3, TestReserve3);
	cout << "TestReturn3으로 반환" << endl;
	TestReturn4 = solution(n4, TestLost4, TestReserve4);
	cout << "TestReturn4으로 반환" << endl;
	TestReturn5 = solution(n5, TestLost5, TestReserve5);

	cout << TestReturn1 << endl;
	cout << TestReturn2 << endl;
	cout << TestReturn3 << endl;
	cout << TestReturn4 << endl;
	cout << TestReturn5 << endl;

	return 0;
}

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	int count = 0;
	int sizeoflost = lost.size();

	vector<int>::iterator IterOwn;
	vector<int>::iterator IterMinus;
	vector<int>::iterator IterPlus;


	for (unsigned int i = 0; i < lost.size();)
	{
		IterOwn = find(reserve.begin(), reserve.end(), lost[i]);

		// if someone who lost training wear has their own additional training wear.
		if (IterOwn != reserve.end())
		{
			cout << "자기 자신이 존재할 때의 조건문 진입" << endl;
			lost.erase(lost.begin() + i);
			reserve.erase(IterOwn);
			count++;
		}
		// if an index of array is getting bigger when element is continuosly erased, it can be lost some cases. 
		else if(IterOwn == reserve.end())
		{
			i++;
		}
	}

	cout << "여벌을 가지고 온 학생 본인이 도난당한 경우 모두 제거 후 lost의 크기는 " << lost.size() << endl;

	for (unsigned int j = 0; j < lost.size(); j++)
	{
		IterMinus = find(reserve.begin(), reserve.end(), lost[j] - 1);
		IterPlus = find(reserve.begin(), reserve.end(), lost[j] + 1);
		
		// if -1 only exist
		if ((IterMinus != reserve.end()) && (IterPlus == reserve.end()))
		{
			cout << "-1만 존재할 때의 조건문 진입" << endl;
			reserve.erase(IterMinus);
			count++;
		}
		// if only +1 exists
		else if ((IterMinus == reserve.end()) && (IterPlus != reserve.end()))
		{
			cout << "+1만 존재할 때의 조건문 진입" << endl;
			reserve.erase(IterPlus);
			count++;
		}
		// if -1 and +1 both exist
		else if ((IterMinus != reserve.end()) && (IterPlus != reserve.end()))
		{
			cout << "-1과 +1이 둘 다 존재할 때의 조건문 진입" << endl;
			reserve.erase(IterMinus);
			count++;
		}
	}

	for (unsigned int k = 0; k < reserve.size(); k++)
	{
		cout << reserve[k] << " ";
	}

	cout << endl;

	answer = n - sizeoflost + count;
	return answer;
}