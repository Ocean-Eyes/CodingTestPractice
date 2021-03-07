#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> solution(vector<int> progresses, vector<int> speeds);

int main()
{
    vector<int> TestProgresses1 = {93, 30, 55};
    vector<int> TestProgresses2 = { 95, 90, 99, 99, 80, 99 };
    vector<int> TestSpeeds1 = { 1, 30, 5 };
    vector<int> TestSpeeds2 = { 1, 1, 1, 1, 1, 1 };
    vector<int> TestReturn1, TestReturn2;

    TestReturn1 = solution(TestProgresses1, TestSpeeds1);
    TestReturn2 = solution(TestProgresses2, TestSpeeds2);

    for (int m = 0; m < TestReturn1.size(); m++)
    {
        cout << TestReturn1[m] << " ";
    }

    cout << endl;

    for (int l = 0; l < TestReturn2.size(); l++)
    {
        cout << TestReturn2[l] << " ";
    }

    cout << endl;

    return 0;
}

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    vector<int> progresses_count(progresses.size());
    int temp = 0;
    int answer_count;
    
    // To calculate how many times it spend per progresses
    for (unsigned int i = 0; i < progresses.size(); i++)
    {
        temp = progresses[i];
        while (temp < 100)                              // Escape when progress is over 100%
        {
            temp += speeds[i];
            progresses_count[i]++;                      // Count how many times to achieve over 100%
        }

        cout << progresses_count[i] << " ";
    }

    cout << endl;

    // Calculate how many functions are distributed.
    for (unsigned int j = 0; j < progresses_count.size(); j+=answer_count)
    {
        answer_count = 1;
        for (unsigned int k = j + 1; k < progresses_count.size(); k++)
        {
            if (progresses_count[j] >= progresses_count[k])
            {
                answer_count++;
            }
            else
            {
                break;
            }
        }
        answer.push_back(answer_count);

    }

    return answer;
}