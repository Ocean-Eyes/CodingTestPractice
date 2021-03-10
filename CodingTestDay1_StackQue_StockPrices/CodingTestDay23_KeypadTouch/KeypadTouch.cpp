#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::abs;

string solution(vector<int> numbers, string hand);
int get_dist(int number, int hand);

int main()
{
    vector<int> Test_numbers1 = { 1,3,4,5,8,2,1,4,5,9,5 };
    vector<int> Test_numbers2 = { 7,0,8,2,8,3,1,5,7,6,2 };
    vector<int> Test_numbers3 = { 1,2,3,4,5,6,7,8,9,0 };
    string Test_hand1 = "right";
    string Test_hand2 = "left";
    string Test_hand3 = "right";

    string TestReturn1, TestReturn2, TestReturn3;

    TestReturn1 = solution(Test_numbers1, Test_hand1);
    TestReturn2 = solution(Test_numbers2, Test_hand2);
    TestReturn3 = solution(Test_numbers3, Test_hand3);

    cout << "----°á°ú----" << endl;
    cout << TestReturn1 << endl;
    cout << TestReturn2 << endl;
    cout << TestReturn3 << endl;
    cout << "-----------" << endl;

    return 0;
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    char pos_left ='*', pos_right = '#';
    int dist_left, dist_right;
    
    // Consider all numbers in given vector 
    for (int i = 0; i < numbers.size(); i++)
    {
        // if a number is 1/4/7, touch the keypad with left hand
        if ((numbers[i] == 1) || (numbers[i] == 4) || (numbers[i] == 7))
        {
            pos_left = numbers[i];
            answer.push_back('L');
        }
        // if a number is 3/6/9, touch the keypad with right hand
        else if ((numbers[i] == 3) || (numbers[i] == 6) || (numbers[i] == 9))
        {
            pos_right = numbers[i];
            answer.push_back('R');
        }
        // if a number is 2/5/8/0
        else if ((numbers[i] == 2) || (numbers[i] == 5) || (numbers[i] == 8) || (numbers[i] == 0))
        {
            // input the distance between keypad and both hands respectively 
            dist_left = get_dist(numbers[i], pos_left);
            dist_right = get_dist(numbers[i], pos_right);

            // if given number is closer with left hand than right hand
            if (dist_left < dist_right)
            {
                pos_left = numbers[i];
                answer.push_back('L');
            }
            // if given number is closer with right hand than left hand
            else if (dist_left > dist_right)
            {
                pos_right = numbers[i];
                answer.push_back('R');
            }
            // if the distance between given number and left/right hand is same.
            else if (dist_left == dist_right)
            {
                // if the user is left-handed
                if (hand == "left")
                {
                    pos_left = numbers[i];
                    answer.push_back('L');
                }
                // if the user is right-handed
                else if (hand == "right")
                {
                    pos_right = numbers[i];
                    answer.push_back('R');
                }
            }
        }
    }

    return answer;
}

// Get distance between keypad and certain hand.
int get_dist(int number, int hand)
{
    char keypad[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {'*',0,'#'} };
    int pos_number[2] = { 0,0 }, pos_hand[2] = {0,0};
    int dist;

    // Get a position of keypad
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (keypad[j][k] == number)
            {
                pos_number[0] = j;
                pos_number[1] = k;
                break;
            }
        }
    }

    // Get a position of hand
    for (int l = 0; l < 4; l++)
    {
        for (int m = 0; m < 3; m++)
        {
            if (keypad[l][m] == hand)
            {
                pos_hand[0] = l;
                pos_hand[1] = m;
                break;
            }
        }
    }

    // Calculate distance between keypad and hand.
    dist = abs(pos_number[0] - pos_hand[0]) + abs(pos_number[1] - pos_hand[1]);

    return dist;
}