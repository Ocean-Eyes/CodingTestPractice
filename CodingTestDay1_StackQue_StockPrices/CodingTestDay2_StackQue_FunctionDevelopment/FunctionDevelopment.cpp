// �� Ǭ ���� - ����

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> solution(vector<int> progresses, vector<int> speeds);

int main()
{
    vector<int> TestProgresses = {93, 30, 55};
    vector<int> TestSpeeds = { 1, 30, 5 };
    vector<int> TestReturn;

    TestReturn = solution(TestProgresses, TestSpeeds);

    cout << "for�� ����" << endl;
    for (int i = 0; i < TestReturn.size(); i++)
    {
        cout << TestReturn[i] << i <<" ";
        cout << "������" << endl;
    }
    cout << "for�� ��" << endl;

    return 0;
}

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    /*progresses = {0, 0 ,0};
    speeds = {0, 0, 0};*/

    vector<int> answer;
    int count = 0;

    for (unsigned int i=0; i<9; i++)
    {
        for (unsigned int j = 0; j < progresses.size(); j++)
        {
            progresses[j] += speeds[j];
            cout << progresses[j] << endl;
        }

        cout << "�� ����" << endl;

        if (progresses[i] >= 100)
        {
            count++;

            for (unsigned int k=i+1; k < progresses.size(); k++)
            {
                if (progresses[k] >= 100)
                {
                    cout << "100�̻� " << k << endl;
                    count++;
                }
                else
                {
                    cout << "for�� Ż�� " << k << endl;
                    answer.push_back(count);
                    break;
                }
            }
        }
        count = 0;
    }
    
    return answer;
}