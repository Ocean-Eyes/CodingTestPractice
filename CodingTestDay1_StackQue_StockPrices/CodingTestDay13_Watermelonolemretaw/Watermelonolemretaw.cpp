#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

string solution(int n);

int main()
{
    int Test_n1 = 3;
    int Test_n2 = 4;
    string TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_n1);
    TestReturn2 = solution(Test_n2);

    cout << Test_n1 << "을 입력한 결과는 " << TestReturn1 << endl;
    cout << Test_n2 << "을 입력한 결과는 " << TestReturn2 << endl;

    return 0;
}

string solution(int n) {
    string answer = "";
    
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 == 1)
        {
            answer = answer + "수";
        }
        else if (i % 2 == 0)
        {
            answer = answer + "박";
        }
    }
    
    return answer;
}