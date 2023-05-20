#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::boolalpha;

bool solution(string s);

int main()
{
    string Test_s1 = "pPoooyY";
    string Test_s2 = "Pyy";
    bool TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_s1);
    TestReturn2 = solution(Test_s2);

    cout << "s1�� ����� " << boolalpha << TestReturn1 << endl;
    cout << "s2�� ����� " << boolalpha << TestReturn2 << endl;

    return 0;
}

bool solution(string s)
{
    int counter = 0;

    for (unsigned int i = 0; i < s.size(); i++)
    {
        counter += toupper(s[i]) == 'P' ? 1 : 0;
        counter -= toupper(s[i]) == 'Y' ? 1 : 0;
    }

    return !!counter;
}