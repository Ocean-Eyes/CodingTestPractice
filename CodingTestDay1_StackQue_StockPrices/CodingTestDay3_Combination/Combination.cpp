//#include <iostream>
//#include <string>
//#include <vector>
//
//using std::cout;
//using std::endl;
//using std::vector;
//
//vector<int> solution(vector<int> numbers);
//
//int main()
//{
//	vector<int> testNumbers1 = { 2, 1, 3, 4, 1 };
//	vector<int> testNumbers2 = { 5, 0, 2, 7 };
//	vector<int> ResultNumbers1;
//	vector<int> ResultNumbers2;
//
//	ResultNumbers1 = solution(testNumbers1);
//	ResultNumbers2 = solution(testNumbers2);
//
//	for (unsigned int n = 0; n < ResultNumbers1.size(); n++)
//	{
//		cout << ResultNumbers1[n] << " ";
//	}
//
//	cout << endl;
//
//	for (unsigned int o = 0; o < ResultNumbers2.size(); o++)
//	{
//		cout << ResultNumbers2[o] << " ";
//	}
//
//	return 0;
//}
//
//vector<int> solution(vector<int> numbers)
//{
//	vector<int> answer;
//	int temp;
//	int count = 0;
// 
//	for (unsigned int i = 0; i < numbers.size(); i++)
//	{
//		for (unsigned int j = i + 1; j < numbers.size(); j++)
//		{
//			temp = numbers[i] + numbers[j];
//
//			for (unsigned int k = 0; k < answer.size(); k++)
//			{
//				if (temp != answer[k])
//				{
//					count++;
//				}
//			}
//
//			if (count == answer.size())
//			{
//				answer.push_back(temp);
//			}
//			count = 0;
//		}
//	}
//
//	temp = 0;
//	
//	for (unsigned int l = 0; l < answer.size(); l++)
//	{
//		for (unsigned int m = l + 1; m < answer.size(); m++)
//		{
//			if (answer[l] > answer[m])
//			{
//				temp = answer[m];
//				answer[m] = answer[l];
//				answer[l] = temp;
//			}
//		}
//	}
//
//	return answer;
//}