#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<long long> solution(int x, int n);

int main()
{
    int Test_x = 2;
    int Test_n = 5;
    vector<long long> TestReturn;

    TestReturn = solution(Test_x, Test_n);

    for (int i = 0; i < TestReturn.size(); i++)
    {
        cout << TestReturn[i] << " ";
    }

    cout << endl;

    return 0;
}

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int sum = 0;

    // Repeat the tasks below 'n' times
    for (int j = 0; j < n; j++)
    {
        sum += x;                       // Add as much as 'x' to push the next element
        answer.push_back(sum);          // Push into vector, 'answer'

    }

    return answer;
}