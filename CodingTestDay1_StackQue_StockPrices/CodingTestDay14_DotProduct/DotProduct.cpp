#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int solution(vector<int> a, vector<int> b);

int main()
{
	vector<int> Test_a1 = { 1,2,3,4 };
	vector<int> Test_b1 = { -3,-1,0,2 };
	vector<int> Test_a2 = { -1,0,1 };
	vector<int> Test_b2 = { 1,0,-1 };
	int TestReturn1, TestReturn2;

	TestReturn1 = solution(Test_a1, Test_b1);
	TestReturn2 = solution(Test_a2, Test_b2);

	cout << "a1과 b1의 내적은 " << TestReturn1 << endl;
	cout << "a2과 b2의 내적은 " << TestReturn2 << endl;

	return 0;
}

int solution(vector<int> a, vector<int> b) {
	int answer = 0;
	
	// Each element in 2 vectors with the same index is multiplied and obtain the sum.
	for (int i = 0; i<a.size(); i++)
	{
		answer += a[i] * b[i];
	}
	
	return answer;
}