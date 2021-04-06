#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::to_string;
using std::boolalpha;

bool solution(int x);

int main()
{
    int test_n1 = 10;
    int test_n2 = 12;
    int test_n3 = 11;
    int test_n4 = 13;
    bool test_return1, test_return2, test_return3, test_return4;

    test_return1 = solution(test_n1);
    test_return2 = solution(test_n2);
    test_return3 = solution(test_n3);
    test_return4 = solution(test_n4);

    cout << boolalpha << test_return1 << endl;
    cout << boolalpha << test_return2 << endl;
    cout << boolalpha << test_return3 << endl;
    cout << boolalpha << test_return4 << endl;

    return 0;
}

bool solution(int x) {
    bool answer = true;
    int temp = 0;
    string str_x = to_string(x);                // Convert the string type and store into str_x.

    // Subtract '0' from each element so that each digit in the letter becomes an integer rather than an ASCII code.
    for (int i = 0; i < str_x.size(); i++)
    {
        temp += static_cast<int>(str_x[i]-'0');
    }

    // If x doesn't divisible with temp which is the sum of each digit from x,
    // Initialize it to 'false' because it's not the Harshad Number.
    if (x % temp != 0)
    {
        answer = false;
    }

    return answer;
}