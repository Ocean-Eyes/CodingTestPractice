// 못 푼 문제. 보류
#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::endl;
using std::vector;
using std::sqrt;

int solution(int n);

int main()
{
    int Test_n1 = 10;
    int Test_n2 = 5;
    int TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_n1);
    TestReturn2 = solution(Test_n2);
    
    cout << TestReturn1 << endl;
    cout << TestReturn2 << endl;

    return 0;
}

int solution(int n) 
{
    int answer = 0;
    vector<int> temp;

    for (int i = 2; i <= n; i++)
    {
        temp.push_back(i);
    }
    
    for (int i : temp)
    {
        if (i > sqrt(n))
        {
            break;
        }

        for (int j = i; j <= n;)
        {
            if (j == i)
            {
                j++;
            }
            else if (j % i != 0)
            {
                j++;
            }
            else if (j % i == 0)
            {
                temp.erase(temp.begin() + j - 2 );
            }
        }
    }

    answer = temp.size();

    return answer;
}