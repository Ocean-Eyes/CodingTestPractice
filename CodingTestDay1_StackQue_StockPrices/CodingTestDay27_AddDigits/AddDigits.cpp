#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::to_string;

int solution(int n);

int main()
{
    int Test_n1 = 123;
    int Test_n2 = 987;
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
    string temp = to_string(n);                         // Convert integer to string type and store in another variable 


    // Subtract '0' to convert 'char type' to 'int type' (( ex) '1' -> 1) and sum each digit into answer.
    for (int i = 0; i < temp.size(); i++)
    {
        answer += static_cast<int>(temp[i] - '0');
    }

    return answer;
}