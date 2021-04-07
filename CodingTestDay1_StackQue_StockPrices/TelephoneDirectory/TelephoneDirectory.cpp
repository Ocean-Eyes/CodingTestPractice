#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::find;
using std::boolalpha;

bool solution(vector<string> phone_book);

int main()
{
    vector<string> Test_phone_book1 = { "119", "97674223", "1195524421" };
    vector<string> Test_phone_book2 = { "123","456","789" };
    vector<string> Test_phone_book3 = { "12","123","1235","567","88" };

    bool Test_return1, Test_return2, Test_return3;

    Test_return1 = solution(Test_phone_book1);
    Test_return2 = solution(Test_phone_book2);
    Test_return3 = solution(Test_phone_book3);

    cout << boolalpha << Test_return1 << endl;
    cout << boolalpha << Test_return2 << endl;
    cout << boolalpha << Test_return3 << endl;

    return 0;
}

bool solution(vector<string> phone_book) {
    bool answer = true; 

    for (int i = 0; i < phone_book.size() - 1; i++)
    {
        for (int j = i + 1; j < phone_book.size(); j++)
        {
            if((phone_book[j].find(phone_book[i]) == 0) || (phone_book[i].find(phone_book[j]) == 0))
            {
                answer = false;
                return answer;
            }
        }
    }
    return answer;
}