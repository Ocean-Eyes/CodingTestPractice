//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using std::cout;
//using std::endl;
//using std::vector;
//using std::max_element;
//using std::min_element;
//
//int main()
//{
//
//	vector<int> test1 = { 1,2,3,4,5,6 };
//	vector<int> test2 = { 4,4,4 };
//	vector<int> test3 = { 3, 1, 1 };
//	vector<int> test4 = { 1, 3, 3 };
//
//	int max_index1 = max_element(test1.begin(), test1.end()) - test1.begin();
//	int max_index2 = max_element(test2.begin(), test2.end()) - test2.begin();
//	int max_index3 = max_element(test3.begin(), test3.end()) - test3.begin();
//	int max_index4 = max_element(test4.begin(), test4.end()) - test4.begin();
//
//	cout << "Ã¹¹øÂ° º¤ÅÍÀÇ ÃÖ´ñ°ªÀº " << *max_element(test1.begin(), test1.end()) << endl;
//	cout << "Ã¹¹øÂ° º¤ÅÍÀÇ ÃÖ´ñ°ªÀÇ index´Â " << max_index1 << endl;
//	cout << "µÎ¹øÂ° º¤ÅÍÀÇ ÃÖ´ñ°ªÀº " << *max_element(test2.begin(), test2.end()) << endl;
//	cout << "µÎ¹øÂ° º¤ÅÍÀÇ ÃÖ´ñ°ªÀÇ index´Â " << max_index2 << endl;
//	cout << "¼¼¹øÂ° º¤ÅÍÀÇ ÃÖ´ñ°ªÀº " << *max_element(test3.begin(), test3.end()) << endl;
//	cout << "¼¼¹øÂ° º¤ÅÍÀÇ ÃÖ´ñ°ªÀÇ index´Â " << max_index3 << endl;
//	cout << "³×¹øÂ° º¤ÅÍÀÇ ÃÖ´ñ°ªÀº " << *max_element(test4.begin(), test4.end()) << endl;
//	cout << "³×¹øÂ° º¤ÅÍÀÇ ÃÖ´ñ°ªÀÇ index´Â " << max_index4 << endl;
//	
//		return 0;
//}