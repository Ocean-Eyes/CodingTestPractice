#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::stoi;

int solution(string s);

int main()
{
    string Test_s1 = "1234";
    string Test_s2 = "-1234";
    string Test_s3 = "+1234";
    int TestReturn1, TestReturn2, TestReturn3;

    TestReturn1 = solution(Test_s1);
    TestReturn2 = solution(Test_s2);
    TestReturn3 = solution(Test_s3);

    cout << TestReturn1 << endl;
    cout << TestReturn2 << endl;
    cout << TestReturn3 << endl;

    return 0;
}

int solution(string s) {
    int answer = 0;

    answer = stoi(s);

    return answer;
}