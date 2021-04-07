#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::to_string;
using std::sort;
using std::greater;

string solution(vector<int> numbers);

int main()
{
    vector<int> Test_numbers1 = { 6, 10, 2 };
    vector<int> Test_numbers2 = { 3, 30, 34, 5, 9 };
    string Test_return1, Test_return2;

    Test_return1 = solution(Test_numbers1);
    Test_return2 = solution(Test_numbers2);

    cout << Test_return1 << endl;
    cout << Test_return2 << endl;

    return 0;
}

string solution(vector<int> numbers) {
    string answer = "";

    for(int num : numbers)
    {
       answer.append(to_string(num));
    }

    sort(answer.begin(), answer.end(), greater<>());

    return answer;
}