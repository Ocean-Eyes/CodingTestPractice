#include <iostream>

using std::cout;
using std::endl;

long long solution(int a, int b);

int main()
{
    int Test_a1 = 3;
    int Test_a2 = 3;
    int Test_a3 = 5;
    int Test_b1 = 5;
    int Test_b2 = 3;
    int Test_b3 = 5;
    long long TestReturn1, TestReturn2, TestReturn3;

    TestReturn1 = solution(Test_a1, Test_b1);
    TestReturn2 = solution(Test_a2, Test_b2);
    TestReturn3 = solution(Test_a3, Test_b3);

    cout << Test_a1 << "과" << Test_b1 << "을 입력한 값의 반환값은 " << TestReturn1 << endl;
    cout << Test_a2 << "과" << Test_b2 << "을 입력한 값의 반환값은 " << TestReturn2 << endl;
    cout << Test_a3 << "과" << Test_b3 << "을 입력한 값의 반환값은 " << TestReturn3 << endl;

    return 0;
}

long long solution(int a, int b) {
    long long answer = 0;

    if (a > b)
    {
        for (int i = a; i <= b; i++)
        {
            answer += i;
        }
    }
    else if (a < b)
    {
        for (int i = b; i <= a; i++)
        {
            answer += i;
        }
    }
    else if (a == b)
    {
        answer = a; // same as answer = b
    }

    return answer;
}