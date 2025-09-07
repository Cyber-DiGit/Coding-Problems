#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j = 0;
    int n = 1;

    while (i <= 4)
    {
        while (j < i)
        {
            if (j == (i - 1))
            {
                cout << n << " ";
                j = 0;
                break;
            }
            else
            {
                cout << n << " ";
                j++;
                n++;
            }
        }
        i++;
        n++;
        cout << endl;
    }
}