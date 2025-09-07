#include <iostream>
using namespace std;

/*
Square Pyramid Pattern
1
1 4
1 4 9
1 4 9 16
1 4 9 16 25
*/

int main()
{
    // variables
    int N;
    int i;
    int j;

    // Input
    cout << "Enter the number of rows: ";

    cin >> N;

    i = 1;

    // The Output
    while (i <= N)
    {
        j = 1;
        while (j <= i)
        {
            cout << j * j << " ";
            j++;
        }
        i++;
        cout << "\n";
    }
    return 0;
}