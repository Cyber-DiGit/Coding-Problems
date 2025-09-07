#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        if (row == 1)
        {
            cout << 1 << endl;
            continue;
        }
        for (int col = 1; col <= row; col++)
        {
            if (col == 1 && col != row)
            {
                cout << row - 1;
            }
            else if (col == row)
            {
                cout << row - 1 << endl;
            }
            else
            {
                cout << 0;
            }
        }
    }
    return 0;
}