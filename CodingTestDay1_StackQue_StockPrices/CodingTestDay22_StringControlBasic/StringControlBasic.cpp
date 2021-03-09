#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::endl;
using std::string;
using std::boolalpha;

bool solution(string s);

int main()
{
    string Test_s1 = "a234";
    string Test_s2 = "1234";
    bool TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_s1);
    TestReturn2 = solution(Test_s2);

    cout << Test_s1 << "를 입력하여 나온 반환값은 " << boolalpha << TestReturn1 << "이다." << endl;
    cout << Test_s2 << "를 입력하여 나온 반환값은 " << boolalpha << TestReturn2 << "이다." << endl;

    return 0;
}

bool solution(string s)
{
    bool answer = true;
    // if a size of given string is 4 or 6
    if ((s.size() == 4) || (s.size() == 6))
    {
        // To check whether its elements are digit or not
        for (int i = 0; i < s.size(); i++)
        {
            // if element is not corresponds with digit
            if (isdigit(s[i]) == 0)
            {
                answer = false;
                break;
            }
        }
    }
    else
    {
        answer = false;
    }
    return answer;
}