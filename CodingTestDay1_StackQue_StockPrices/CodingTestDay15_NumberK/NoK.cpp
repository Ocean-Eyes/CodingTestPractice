#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::sort;

vector<int> solution(vector<int> array, vector<vector<int>> commands);

int main()
{
    vector<int> TestArray1 = { 1,5,2,6,3,7,4 };
    vector<vector<int>> TestCommands1 = { {2,5,3}, {4,4,1}, {1,7,3} };
    vector<int> TestReturn1;

    TestReturn1 = solution(TestArray1, TestCommands1);

    for (int i = 0; i < TestReturn1.size(); i++)
    {
        cout << TestReturn1[i] << " ";
    }

    cout << endl;

    return 0;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<vector<int>> temp_answer(commands.size()); // Create a vector that is as large as the size of the commands vector.

    // When cut and sorted from the i-th through j-th of the array, find the k-th number
    //
    // ex)
    // i j k
    //-------
    // 2 5 3
    // 4 4 1
    // 1 7 3
    //=> find the 3rd, 1st, 3rd element after cutting 2nd-5th, 4th-4th, 1st-7th respectively 
    for (int i = 0; i < commands.size(); i++)
    {
        temp_answer[i].resize(commands[i][1] - commands[i][0] + 1);                                         // Sets the size of the vector by the number of i-th to j-th numbers.
        copy(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1], temp_answer[i].begin());   // Copy the elements i through j.
        sort(temp_answer[i].begin(), temp_answer[i].end());                                                 // Sorts in ascending order.
        answer.push_back(temp_answer[i][commands[i][2] - 1]);                                               // input k-th number into vector, answer.
    }

    return answer;
}