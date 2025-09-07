#include <iostream>
using namespace std;
// This program prints a pyramid pattern of numbers with 1 at top then 232 at second line then 34543 at third line and so on till the 5th line.
int main()
{
    int n = 5; // Number of lines in the pyramid
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = i; j < n; j++)
        {
            cout << " ";        
        }
        // Print increasing numbers
        for (int j = i; j < 2 * i; j++)
        {
            cout << j;
        }
        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--)
        {
            cout << j;
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}