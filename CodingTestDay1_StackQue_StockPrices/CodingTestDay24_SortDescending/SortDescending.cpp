#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::string;
using std::sort;
using std::greater;

string solution(string s);

int main()
{
    string Test_s = "Zbcdefg";
    string TestReturn;
    TestReturn = solution(Test_s);

    cout << Test_s << "�� ������������ ������ ����� " << TestReturn << endl;

    return 0;
}

string solution(string s) {
    string answer = "";
    
    answer = s;
    sort(answer.begin(), answer.end(), greater<>());

    return answer;
}