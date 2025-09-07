#include <iostream>
using namespace std;
/*Print the following pattern using xor x=1-x:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
int main()
{
    //* Approach-2: The better approach.
    cout << "Enter number of rows: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x = i % 2;
        for (int j = 1; j <= i; x = 1 - x, j++)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
    /**
    ** Approach-1: uses simple if-else logic for 1st of every row.

    int x, n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            x = 0;
        }
        else
        {
            x = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x = 1 - x;
        }
        cout << endl;
    }
    return 0;
    */
}
