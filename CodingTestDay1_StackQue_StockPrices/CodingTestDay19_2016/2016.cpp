#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string solution(int a, int b);

int main()
{
	int Test_a1 = 5;
	int Test_b1 = 24;
	int Test_a2 = 10;
	int Test_b2 = 31;
	string TestReturn1, TestReturn2;

	TestReturn1 = solution(Test_a1, Test_b1);
	TestReturn2 = solution(Test_a2, Test_b2);

	cout << Test_a1 << "월 " << Test_b1 << "일의 요일은 " << TestReturn1 << endl;
	cout << Test_a2 << "월 " << Test_b2 << "일의 요일은 " << TestReturn2 << endl;

	return 0;
}

string solution(int a, int b) {
	string answer = "";
	int day_per_month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int gap = 0;

	// To sum all day per month between January to a. 
	for (int i = 0; i < a - 1; i++)
	{
		gap += day_per_month[i];
	}

	gap += b; // To consider b that indicates 'day' in given month which is a.
	gap = gap - 1; // To consider 1st January.

	cout << "1월 1일 부터 " << a << "월 " << b << "일 까지의 날짜 차이는 " << gap << "이다" << endl;

	// Calculate what day of week it is from remainder that used 'gap' value.
	switch (gap % 7)
	{
	case 0:
	{
		cout << "Friday" << endl;
		answer = "FRI";
		break;
	}
	case 1:
	{
		cout << "Saturday" << endl;
		answer = "SAT";
		break;
	}
	case 2:
	{
		cout << "Sunday" << endl;
		answer = "SUN";
		break;
	}
	case 3:
	{
		cout << "Monday" << endl;
		answer = "MON";
		break;
	}
	case 4:
	{
		cout << "Tuesday" << endl;
		answer = "TUE";
		break;
	}
	case 5:
	{
		cout << "Wednesday" << endl;
		answer = "WED";
		break;
	}
	case 6:
	{
		cout << "Thursday" << endl;
		answer = "THU";
		break;
	}
	}






	return answer;
}