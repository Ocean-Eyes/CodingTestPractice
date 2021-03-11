#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

double solution(vector<int> arr);

int main()
{
    vector<int> Test_arr1 = { 1,2,3,4 };
    vector<int> Test_arr2 = { 5,5 };
    double TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_arr1);
    TestReturn2 = solution(Test_arr2);

    cout << TestReturn1 << endl;
    cout << TestReturn2 << endl;

    return 0;
}

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;
    double avg;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    avg = sum / arr.size();
    answer = avg;
    return answer;
}