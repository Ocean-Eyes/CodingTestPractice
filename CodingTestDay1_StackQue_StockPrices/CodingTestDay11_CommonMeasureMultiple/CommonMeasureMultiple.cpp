#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

vector<int> solution(int n, int m);

int main()
{
    int Test_n1 = 3;
    int Test_n2 = 2;
    int Test_m1 = 12;
    int Test_m2 = 5;
    vector<int> TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_n1, Test_m1);
    TestReturn2 = solution(Test_n2, Test_m2);

    cout << Test_n1 << "과 " << Test_m1 << "의 최대공약수/최소공배수는 ";
    for (int i = 0; i < TestReturn1.size(); i++)
    {
        cout << TestReturn1[i] << " ";
    }
    
    cout << endl;

    cout << Test_n2 << "과 " << Test_m2 << "의 최대공약수/최소공배수는 ";
    for (int i = 0; i < TestReturn2.size(); i++)
    {
        cout << TestReturn2[i] << " ";
    }

    cout << endl;


    return 0;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int GreatestMeasure = 1;
    int LeastMultiple = 1;

    // n <= m
    if (n <= m)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if ((n % j == 0) && (m % j == 0))
            {
                GreatestMeasure *= j;
                n /= j;
                m /= j;
                j = 1;
            }
        }
    }
    // n > m
    else
    {
        for (int j = 1; j < m + 1; j++)
        {
            if ((n % j == 0) && (m % j == 0))
            {
                GreatestMeasure *= j;
                n /= j;
                m /= j;
                j = 1;
            }
        }
    }

    LeastMultiple = GreatestMeasure * n * m;

    answer.push_back(GreatestMeasure);
    answer.push_back(LeastMultiple);

    return answer;
}