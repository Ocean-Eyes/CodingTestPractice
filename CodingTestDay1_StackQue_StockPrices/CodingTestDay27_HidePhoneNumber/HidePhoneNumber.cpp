#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string solution(string phone_number);

int main()
{
    string Test_pn1 = "01033334444";
    string Test_pn2 = "027778888";
    string TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_pn1);
    TestReturn2 = solution(Test_pn2);

    
    cout << TestReturn1 << endl;
    cout << TestReturn2 << endl;

    return 0;
}

string solution(string phone_number) {
    string answer = "";

    // Change the number to '*' except for the last 4 digits.
    for (int i = 0; i < phone_number.size() - 4; i++)
    {
        phone_number[i] = '*';
    }

    answer = phone_number;


    return answer;
}