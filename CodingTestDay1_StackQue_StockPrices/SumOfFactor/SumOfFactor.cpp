#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::unique;

int solution(int n);

int main()
{
    int Test_n1 = 12;
    int Test_n2 = 5;
    int Test_n3 = 1;
    int Test_n4 = 2;
    int Test_n5 = 3;
    int Test_return1, Test_return2, Test_return3, Test_return4, Test_return5;

    Test_return1 = solution(Test_n1);
    Test_return2 = solution(Test_n2);
    Test_return3 = solution(Test_n3);
    Test_return4 = solution(Test_n4);
    Test_return5 = solution(Test_n5);


    cout << Test_return1 << endl;
    cout << Test_return2 << endl;
    cout << Test_return3 << endl;
    cout << Test_return4 << endl;
    cout << Test_return5 << endl;

    return 0;
}

int solution(int n) {
    int answer = 0;
    vector<int> temp;

    // if n is under 4
    if (n < 4)
    {
        // Repeat the tasks below until factor is n
        for (int factor = 1; factor <= n; factor++)
        {
            // Push the factors into end of the vector, temp when n is divisible
            if (n % factor == 0)
            {
                temp.push_back(factor);
                temp.push_back(n / factor);
            }
        }
    }
    // if n is 4 or higher
    else
    {
        // Repeat the tasks below until factor is under n/2
        for (int factor = 1; factor < (n / 2); factor++)
        {
            // Push the factors into end of the vector, temp when n is divisible
            if (n % factor == 0)
            {
                temp.push_back(factor);
                temp.push_back(n / factor);
            }
        }
    }

    // Sort in ascending order
    sort(temp.begin(), temp.end());

    // Erase from an index of the number of overlapping numbers to the end of the vector
    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    // Remaining numbers in temp are factor of n. 
    // Therefore, return the sum of them.
    for (int i = 0; i < temp.size(); i++)
    {
        answer += temp[i];
    }

    return answer;
}