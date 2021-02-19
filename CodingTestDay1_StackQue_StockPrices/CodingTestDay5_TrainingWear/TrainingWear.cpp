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
	cout << "TestReturn1���� ��ȯ" << endl;
	TestReturn2 = solution(n2, TestLost2, TestReserve2);
	cout << "TestReturn2���� ��ȯ" << endl;
	TestReturn3 = solution(n3, TestLost3, TestReserve3);
	cout << "TestReturn3���� ��ȯ" << endl;

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
			cout << "�ڱ� �ڽ��� ������ ���� ���ǹ� ����" << endl;
			cout << "�ڱ� �ڽ��� ������ ī��Ʈ �Ѵ�" << endl;
			reserve.erase(reserve.begin() + i);
			recipient++;
		}

		// if only -1 exists
		if ((IterMinus != reserve.end()) && (IterPlus == reserve.end()))
		{
			cout << "-1�� ������ ���� ���ǹ� ����" << endl;

			cout << lost[i] << "�� -1�� �����ϹǷ� ī��Ʈ" << endl;
			recipient++;

		}
		// if only +1 exists
		else if ((IterMinus == reserve.end()) && (IterPlus != reserve.end()))
		{
			cout << "+1�� ������ ���� ���ǹ� ����" << endl;

			if ((*(IterPlus)+1) == lost[i] + 2)
			{
				cout << lost[i] << "�� +2�� �����ϹǷ� �ǳʶ�" << endl;
				continue;
			}
			else
			{
				cout << lost[i] << "�� +1�� �����ϹǷ� ī��Ʈ" << endl;
				recipient++;
			}
		}
		// if -1 and +1 both exist
		else if ((IterMinus != reserve.end()) && (IterPlus != reserve.end()))
		{
			cout << "-1�� +1�� �� �� ������ ���� ���ǹ� ����" << endl;
			cout << lost[i] << "�� -1�� +1�� ��� �����ϹǷ� �ѹ��� ī��Ʈ" << endl;
			recipient++;

		}
	}

	answer = n - lost.size() + recipient;
	return answer;
}