#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::sort;
using std::stoll;
using std::greater;

long long solution(long long n);

int main()
{
    long long Test_n1 = 118372;
    long long Test_n2 = 548227;
    long long TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_n1);
    TestReturn2 = solution(Test_n2);

    cout << TestReturn1 << endl;
    cout << TestReturn2 << endl;

    return 0;
}

long long solution(long long n) {
    long long answer = 0;
    string temp = to_string(n);                         // Convert long long to string and store into temp.

    sort(temp.begin(), temp.end(), greater<>());        // Sort in a descending order
    answer = stoll(temp);                               // Convert string to long long and store into answer.

    return answer;
}