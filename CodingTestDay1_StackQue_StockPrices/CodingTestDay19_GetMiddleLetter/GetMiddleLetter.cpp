#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

string solution(string s);

int main()
{
    string Test_s1 = "abcde";
    string Test_s2 = "qwer";
    string TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_s1);
    TestReturn2 = solution(Test_s2);

    // For confirming if method 'size' return integer type or not

    cout << Test_s1 << "�� ����� ������ ������?" << Test_s1.size() / 2 << endl;

    cout << Test_s1 << "�� �Է��� ���� ��ȯ���� " << TestReturn1 << endl;
    cout << Test_s2 << "�� �Է��� ���� ��ȯ���� " << TestReturn2 << endl;

    return 0;
}

string solution(string s) {
    string answer = "";
 
    // A size of given string is even number   
    if (s.size() % 2 == 0)
    {
        answer.push_back(s[static_cast<int>(s.size() / 2) - 1]);
        answer.push_back(s[static_cast<int>(s.size() / 2)]);
    }
    // A size of given string is odd number
    else
    {
        answer.push_back(s[static_cast<int>(s.size() / 2)]);
    }

    return answer;
}