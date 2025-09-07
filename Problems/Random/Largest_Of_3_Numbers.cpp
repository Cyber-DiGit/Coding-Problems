#include <iostream>
using namespace std;
// Find largest of 3 numbers.
int main()
{
    int l, m, n, o;
    int i = 0;
    cin >> m >> n >> o;
    l = m;
    if (l < m)
    {
        l = m;
    }
    if (l < n)
    {
        l = n;
    }
    if (l < o)
    {
        l = o;
    }
    cout << "Largest number is: " << l << endl;
    return 0;
}