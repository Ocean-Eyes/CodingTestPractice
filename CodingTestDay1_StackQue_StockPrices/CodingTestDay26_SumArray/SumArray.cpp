#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2);

int main()
{
    vector<vector<int>> Test_arr1 = { {1,2},{2,3} };
    vector<vector<int>> Test_arr2 = { {3,4},{5,6} };
    vector<vector<int>> TestReturn1;

    TestReturn1 = solution(Test_arr1, Test_arr2);

    for (int k = 0; k < TestReturn1.size(); k++)
    {
        for (int l = 0; l < TestReturn1.size(); l++)
        {
            cout << TestReturn1[k][l] << " ";
        }
        cout << endl;
    }

    return 0;
}


vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size(), 0));

    // Add the elements of each of the two m * n matrices.
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    return answer;
}