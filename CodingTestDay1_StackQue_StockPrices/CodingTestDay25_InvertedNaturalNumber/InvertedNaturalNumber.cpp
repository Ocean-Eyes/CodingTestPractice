#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::to_string;

vector<int> solution(long long n);

int main()
{
    long long Test_n1 = 12345;
    long long Test_n2 = 10000001;
    vector<int> TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_n1);
    TestReturn2 = solution(Test_n2);

    for (unsigned int i = 0; i < TestReturn1.size(); i++)
    {
        cout << TestReturn1[i] << " ";
    }

    cout << endl;
    
    for (unsigned int j = 0; j < TestReturn2.size(); j++)
    {
        cout << TestReturn2[j] << " ";
    }

    cout << endl;



    return 0;
}

vector<int> solution(long long n) {
    vector<int> answer;
    string temp;
    temp = to_string(n);                                // Convert 'n' from Long long to String and input into temp.

    cout << "변환한 값은 " << temp << endl;


    for (int k = temp.size() - 1 ; k >= 0; k--)
    {
       answer.push_back((temp[k]-'0'));                 // Subtract '0' that first digit in ASCII CODE to convert Char to Integer.
    }

    return answer;
}