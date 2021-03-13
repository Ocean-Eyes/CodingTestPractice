#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::sqrt;
using std::pow;

long long solution(long long n);

int main()
{
    long long Test_n1 = 121;
    long long Test_n2 = 3;
    long long TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_n1);
    TestReturn2 = solution(Test_n2);

    cout << TestReturn1 << endl;
    cout << TestReturn2 << endl;

    return 0;
}

long long solution(long long n) {
    long long answer = 0;
    long long x = sqrt(n);          // if it's not casted, then, sqrt(n) is going to be double type.
    
    // if x^2 = n, return '(x+1)^2'
    if (pow(x, 2) == n)
    {
        answer = pow(x + 1, 2); 
    }
    // if x^2 != n, return '-1'.
    else
    {
        answer = -1;
    }
    
    return answer;
}