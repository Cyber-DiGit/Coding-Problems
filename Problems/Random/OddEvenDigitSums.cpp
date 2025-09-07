#include <iostream>
using namespace std;
int main()
{
    int pos = 0, n, d = 0, sumodd = 0, sumeven = 0;
    cin >> n;
    for (pos = 1; n > 0; n /= 10, pos++)
    {
        d = n % 10;
        if (pos % 2 == 0)
        {
            sumeven += d;
        }
        else
        {
            sumodd += d;
        }
    }
    cout << sumodd << endl << sumeven << endl;
    return 0;
}