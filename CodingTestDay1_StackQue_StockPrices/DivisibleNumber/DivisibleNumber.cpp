#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

vector<int> solution(vector<int> arr, int divisor);

int main()
{
    vector<int> Test_arr1 = { 5,9,7,10 };
    vector<int> Test_arr2 = { 2,36,1,3 };
    vector<int> Test_arr3 = { 3,2,6 };
    int Test_divisor1 = 5;
    int Test_divisor2 = 1;
    int Test_divisor3 = 10;
    vector<int> Test_return1, Test_return2, Test_return3;

    Test_return1 = solution(Test_arr1, Test_divisor1);
    Test_return2 = solution(Test_arr2, Test_divisor2);
    Test_return3 = solution(Test_arr3, Test_divisor3);

    // Test case #1
    for (int i = 0; i < Test_return1.size(); i++)
    {
        cout << Test_return1[i] << " ";
    }
    cout << endl;

    // Test case #2
    for (int j = 0; j < Test_return2.size(); j++)
    {
        cout << Test_return2[j] << " ";
    }
    cout << endl;

    // Test case #3
    for (int k = 0; k < Test_return3.size(); k++)
    {
        cout << Test_return3[k] << " ";
    }
    cout << endl;
    
    return 0;
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    // Push the element of arr into answer when it element if divisible by given divisor
    for (int l = 0; l < arr.size(); l++)
    {
        if ((arr[l] % divisor) == 0)
        {
            answer.push_back(arr[l]);
        }
    }

    // if there's no element in answer in the end, then push -1 into answer
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
    // if there's element in answer, sort in ascending order
    else
    {
        sort(answer.begin(), answer.end());
    }

    return answer;
}