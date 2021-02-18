//#include <iostream>
//#include <string>
//#include <vector>
//
//using std::vector;
//using std::cout;
//
//vector<int> solution(vector<int> prices);
//
//int main()
//{
//    vector<int> test = { 1,2,3,2,3 };
//    test = solution(test);
//
//    for (unsigned int i = 0; i < test.size(); i++)
//    {
//        cout << test[i] << " ";
//    }
//
//    return 0;
//}
//
//vector<int> solution(vector<int> prices) {
//    vector<int> answer(prices.size());
//    int count = 0;
//
//    for (unsigned int itr_begin = 0; itr_begin < prices.size(); itr_begin++)
//    {
//        for (unsigned int itr_now = itr_begin + 1; itr_now < prices.size(); itr_now++)
//        {
//
//            if (prices[itr_begin] <= prices[itr_now])
//            {
//                count++;
//            }
//            else
//            {
//                count++;
//                break;
//            }
//        }
//        answer[itr_begin] = count;
//        count = 0;
//    }
//
//    return answer;
//}