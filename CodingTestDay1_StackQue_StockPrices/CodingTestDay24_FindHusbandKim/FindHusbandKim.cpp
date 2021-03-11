#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::find;
using std::to_string;

string solution(vector<string> seoul);

int main()
{
    vector<string> Test_seoul = { "Jane", "Kim" };
    string TestReturn;

    TestReturn = solution(Test_seoul);

    cout << TestReturn << endl;

    return 0;
}

string solution(vector<string> seoul) {
    string answer = "";
    int index;
    index = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin(); // Find an index of element that includes "Kim" and input into variable, index.  
    answer = "김서방은 " + to_string(index) + "에 있다"; // Add an index to answer after converting to string type.
 
    return answer;
}