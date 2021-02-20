#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

vector<int> solution(vector<int> arr);

int main()
{
    vector<int> TestArray1 = { 1,1,3,3,0,1,1 };
    vector<int> TestArray2 = { 4,4,4,3,3 };
    vector<int> TestAnswer1, TestAnswer2;

    TestAnswer1 = solution(TestArray1);
    TestAnswer2 = solution(TestArray2);
    
    for (unsigned j = 0; j < TestAnswer1.size(); j++)
    {
        cout << TestAnswer1[j] <<" ";
    }

    cout << endl;

    for (unsigned j = 0; j < TestAnswer2.size(); j++)
    {
        cout << TestAnswer2[j] << " ";
    }

    cout << endl;

    return 0;
}

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (unsigned int i = 0; i < arr.size()-1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            answer.push_back(arr[i]);
        }
    }

    answer.push_back(*(arr.end() - 1));

    return answer;
}