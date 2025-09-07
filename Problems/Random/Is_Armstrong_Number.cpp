#include <iostream>
#include <cmath>
using namespace std;

bool IsArmstrongNo(int n);

int main()
{
    int n;
    cin >> n;
    if (IsArmstrongNo(n) == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}

bool IsArmstrongNo(int n)
{
    int m, sum = 0, digits = 0;
    m = n;
    for (int d = 0; m > 0; m /= 10)
    {
        digits++;
    }
    m = n;
    for (int d = 0; m > 0; m /= 10)
    {
        d = m % 10;
        sum += pow(d, digits);
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}