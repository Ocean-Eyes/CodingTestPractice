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

    cout << "s1의 결과는 " << boolalpha << TestReturn1 << endl;
    cout << "s2의 결과는 " << boolalpha << TestReturn2 << endl;

    return 0;
}

bool solution(string s)
{
    bool answer = true;
    int count_p = 0;
    int count_y = 0;

    for (unsigned int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'p') || (s[i] == 'P'))
        {
            count_p++;
        }
        else if ((s[i] == 'y') || (s[i] == 'Y'))
        {
            count_y++;
        }
    }

    if (count_p == count_y)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }

    return answer;
}