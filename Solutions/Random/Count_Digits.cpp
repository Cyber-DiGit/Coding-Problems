#include <iostream>
using namespace std;
int main()
{
    int n, d, x, count;
    cin >> n >> x;

    for (count = 0; n > 0; n /= 10)
    {
        d = n % 10;
        if (d == x)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
