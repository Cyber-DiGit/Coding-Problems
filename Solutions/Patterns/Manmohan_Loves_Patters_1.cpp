#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col == 1 && col != row)
            {
                cout << 1;
            }
            else if (col == row)
            {
                cout << 1 << endl;
            }
            else if (row % 2 == 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
    }
    return 0;
}