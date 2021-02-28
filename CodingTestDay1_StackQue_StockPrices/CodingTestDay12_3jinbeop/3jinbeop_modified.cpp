#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::pow;

int solution(int n);

int main()
{
    int Test_n1 = 45;
    int Test_n2 = 125;
    int TestReturn1, TestReturn2;

    TestReturn1 = solution(Test_n1);
    TestReturn2 = solution(Test_n2);

    cout << Test_n1 << "을 입력했을 때의 반환값은 " << TestReturn1 << endl;
    cout << Test_n2 << "을 입력했을 때의 반환값은 " << TestReturn2 << endl;

    return 0;
}

int solution(int n)
{
    int answer = 0;
    int temp = 0;
    double power = 0.0;
    int sizeof_vector;
    vector<int> samjinsu;
    vector<int> rev_samjinsu;

    // input n into variable, temp.
    temp = n;

    // make a vector that includes inverted number.
    for (int i = 0;; i++)
    {
        rev_samjinsu.push_back(temp % 3); // input a quotient from 0 to i into new vector 
        temp /= 3;
        if (temp == 0)
        {
            break;
        }
    }

    sizeof_vector = rev_samjinsu.size();

    cout << "*3진법을 거꾸로 뒤집은 값은?*" << endl;

    for (int j = 0; j < sizeof_vector; j++)
    {
        cout << rev_samjinsu[j] << " ";
    }

    cout << endl;

    // convert into decimal system
    for (int k = rev_samjinsu.size() - 1; k > -1; k--)
    {
        temp = pow(static_cast<double>(3), power);
        answer += (rev_samjinsu[k] * temp);
        power++;
    }

    cout << endl;

    return answer;
}