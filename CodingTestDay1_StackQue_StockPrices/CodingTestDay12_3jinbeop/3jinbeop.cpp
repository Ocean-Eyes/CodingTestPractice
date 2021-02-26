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
    int i = 0;
    int temp = 0;
    double power = 0.0;
    int sizeof_samjinsu;
    vector<int> samjinsu;
    vector<int> rev_samjinsu;
    
    // To seek a maximum squares to divide a given n
    while (1)
    {
        temp = pow(static_cast<int>(3), static_cast<int>(i));
        
        if (n < temp)
        {
            i--;
            break;
        }
        
        i++;
    }
    
    cout << "i는 " << i << endl;
    cout << "temp는 " << temp << endl;

    // convert into 3jinbeop
    for (i; i > -1; i--)
    {
        temp = pow(static_cast<double>(3), static_cast<double>(i));
        samjinsu.push_back(n / temp);
        n %= temp;
    }

    cout << "*3진법으로 전환한 값은?*" << endl;

    for (int j=0; j<samjinsu.size(); j++)
    {
        cout << samjinsu[j] << " ";
    }

    cout << endl;

    sizeof_samjinsu = samjinsu.size();

    // make vector that includes reverse-3jinsu
    for (int k = 0; k < sizeof_samjinsu; k++)
    {
        rev_samjinsu.push_back(samjinsu.back());
        samjinsu.pop_back();
    }

    cout << "*3진법을 거꾸로 뒤집은 값은?*" << endl;

    for (int j = 0; j < sizeof_samjinsu; j++)
    {
        cout << rev_samjinsu[j] << " ";
    }

    cout << endl;
    // convert into decimal system
    for (i = rev_samjinsu.size() - 1; i > -1; i--)
    {
        temp = pow(static_cast<double>(3), power);
        answer += (rev_samjinsu[i]*temp);
        power++;
    }

    cout << endl;

    return answer;
}