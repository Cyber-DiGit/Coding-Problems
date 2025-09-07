#include <iostream>
using namespace std;

int main()
{
    int n, d, ans = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (; n > 0; n /= 10)
    {
        d = n % 10;
        ans = (ans * 10) + d;
    }
    cout << "Reversed: " << ans << endl;
    return 0;
}