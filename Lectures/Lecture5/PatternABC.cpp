#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        char ch = 'A';
        for (j = 0; j < n - i; j++, ch++)
        {
            cout << ch << " ";
        }
        ch--;
        for (j = 0; j < n - i; j++, ch--)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}