#include <iostream>
using namespace std;
#define lli long long int

lli gcd(lli a, lli b);
lli lcm(lli a, lli b);

int main()
{
    lli m, n;
    cin >> m >> n;

    cout << lcm(m, n);
}




lli gcd(lli a, lli b)
{
    lli r;
    while (r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

lli lcm(lli a, lli b)
{
    return (a * b / gcd(a, b));
}