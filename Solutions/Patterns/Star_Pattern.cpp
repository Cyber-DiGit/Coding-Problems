#include <iostream>
using namespace std;

/*
Print Star Pattern for n = 5
Output:
        *
      * *
    * * *
  * * * *
* * * * *
*/

int main()
{
    int n, i = 0, j = 0;
    cout << "Enter the number of rows: ";
    cin >> n;

    while (i < n)
    {
        j = 0;
        while (j < n - i - 1)
        {
            cout << "  ";
            j++;
        }
        while (j < n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}