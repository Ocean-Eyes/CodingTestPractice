#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::greater;

string solution(vector<string> participant, vector<string> completion);

int main()
{
	vector<string> TestParticipant1 = { "leo", "kiki", "eden" };
	vector<string> TestCompletion1 = { "eden", "kiki" };
	vector<string> TestParticipant2 = { "marina", "josipa", "nikola", "vinko", "filipa" };
	vector<string> TestCompletion2 = { "josipa" , "filipa", "marina", "nikola" };
	vector<string> TestParticipant3 = { "mislav", "stanko", "mislav", "ana" };
	vector<string> TestCompletion3 = { "stanko", "ana", "mislav" };
	string TestReturn1;
	string TestReturn2;
	string TestReturn3;

	TestReturn1 = solution(TestParticipant1, TestCompletion1);
	TestReturn2 = solution(TestParticipant2, TestCompletion2);
	TestReturn3 = solution(TestParticipant3, TestCompletion3);

	cout << TestReturn1 << endl;
	cout << TestReturn2 << endl;
	cout << TestReturn3 << endl;

	return 0;
}

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	string temp = "";
	string dummy = "";

	sort(participant.begin(), participant.end(), greater<string>());
	sort(completion.begin(), completion.end(), greater<string>());

	for (int w = 0; w < participant.size(); w++)
	{
		cout << participant[w] << " ";
	}

	cout << endl;

	for (int z = 0; z < completion.size(); z++)
	{
		cout << completion[z] << " ";
	}

	cout << endl;

	completion.push_back(dummy);

	for (unsigned int k = 0; k < participant.size(); k++)
	{
		if (participant[k] != completion[k])
		{
			answer = participant[k];
			break;
		}
	}

	return answer;
}