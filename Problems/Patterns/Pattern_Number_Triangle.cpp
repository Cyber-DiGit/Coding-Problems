#include <iostream>
using namespace std;
                //      1 
                //    2 3 2
                //  3 4 5 4 3
                //4 5 6 7 6 5 4

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2*(n-i); j > 1; j-=2)
        {
            cout << "\t";
        }
        for (int j = i; j <= 2 * i - 1; j++)
        {
            cout << j << "\t";
        }
        for (int j = 2 * i - 2; j >= i; j--)
        {
            cout << j << "\t";
        }
        cout << endl;
    }    
}
