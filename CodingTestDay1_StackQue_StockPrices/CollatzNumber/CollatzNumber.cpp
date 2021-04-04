#include <iostream>

using std::cout;
using std::endl;

int solution(int num);

int main()
{
    int Test_num1 = 6;
    int Test_num2 = 16;
    int Test_num3 = 626331;
    int Test_return1, Test_return2, Test_return3;

    Test_return1 = solution(Test_num1);
    Test_return2 = solution(Test_num2);
    Test_return3 = solution(Test_num3);

    cout << Test_return1 << endl;
    cout << Test_return2 << endl;
    cout << Test_return3 << endl;

    return 0;
}

int solution(int num) {
    int answer = 0;
    int count = 0;
    int temp = num;
    
    // Repeat tasks below until temporary number that includes given number will become 1, or it will be repeated 500 times 
    while ((temp != 1) && (count < 500))
    {
        // Divide the number in half when it is even.
        if (temp % 2 == 0)
        {
            temp /= 2;
        }
        // Multiply by 3 and add 1 when the number is odd.
        else if (temp % 2 == 1)
        {
            temp = (temp * 3 + 1);
        }
        // Count each time when an operation is performed.
        count++;
    }

    // Return -1 if more than 500 operations are performed.
    if (count == 500)
    {
        answer = -1;
    }
    // Returns the number of count.
    else
    {
        answer = count;
    }
        return answer;
}