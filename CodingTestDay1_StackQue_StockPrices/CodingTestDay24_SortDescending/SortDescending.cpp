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

    cout << Test_s << "를 내림차순으로 정렬한 결과는 " << TestReturn << endl;

    return 0;
}

string solution(string s) {
    string answer = "";
    
    answer = s;
    sort(answer.begin(), answer.end(), greater<>());

    return answer;
}