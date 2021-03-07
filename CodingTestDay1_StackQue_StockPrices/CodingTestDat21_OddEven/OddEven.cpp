#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;

string solution(int num);

int main()
{
    int Test_num1 = 3;
    int Test_num2 = 4;
    int Test_num3 = 0;
    string TestReturn1, TestReturn2, TestReturn3;

    TestReturn1 = solution(Test_num1);
    TestReturn2 = solution(Test_num2);
    TestReturn3 = solution(Test_num3);

    cout << Test_num1 << "Àº " << TestReturn1 << endl;
    cout << Test_num2 << "Àº " << TestReturn2 << endl;
    cout << Test_num3 << "Àº " << TestReturn3 << endl;
    
    return 0;
}

string solution(int num) {
    string answer = "";
    
    if (num % 2 != 0)
    {
        answer = "Odd";
    }
    else
    {
        answer = "Even";
    }

    
    return answer;
}