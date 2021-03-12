#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::find;

vector<int> solution(vector<int> arr);

int main()
{
    vector<int> Test_arr1 = {4,3,2,1};
    vector<int> Test_arr2 = { 10 };
    vector<int> TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_arr1);
    TestReturn2 = solution(Test_arr2);

    for (int j = 0; j < TestReturn1.size(); j++)
    {
        cout << TestReturn1[j] << " ";
    }

    cout << endl;

    for (int k = 0; k < TestReturn2.size(); k++)
    {
        cout << TestReturn2[k] << " ";
    }

    cout << endl;

    return 0;
}

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int MIN_VALUE;

    answer = arr;                                   // Input arr into answer
    MIN_VALUE = arr[0];

    // Find the minimum value in vector, answer corresponding to arr.
    for (int i = 0; i < answer.size(); i++)
    {
        if (MIN_VALUE > answer[i])
        {
            MIN_VALUE = answer[i];
        }
    }

    // Remove the minimum value in answer
    answer.erase(find(answer.begin(), answer.end(), MIN_VALUE));

    // if arr was made of only one element, then input -1 into answer to return.
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
        
    return answer;
}