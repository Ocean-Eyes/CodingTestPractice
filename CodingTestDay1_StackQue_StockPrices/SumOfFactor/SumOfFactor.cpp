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
    int Test_return1, Test_return2;

    Test_return1 = solution(Test_n1);
    Test_return2 = solution(Test_n2);

    cout << Test_return1 << endl;
    cout << Test_return2 << endl;

    return 0;
}

int solution(int n) {
    int answer = 0;
    vector<int> temp;

    // if n is 0
    if (n == 0)
    {
        answer = 0;
    }
    // if n is 1
    else if (n == 1)
    {
        answer = 1;
    }
    // if n is 2
    else if (n == 2)
    {
        answer = 3;
    }
    // if n is over 2 
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
    }

    return answer;
}