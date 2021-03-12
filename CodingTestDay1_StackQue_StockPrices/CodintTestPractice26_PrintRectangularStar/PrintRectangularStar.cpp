#include <iostream>

using namespace std;

void printStar(int n, int m);

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    printStar(a, b);
    return 0;
}

void printStar(int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
}