#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 2;
    cout << "Enter a number: ";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime" << endl;
            return 0;
        }
        else if (i == n - 1)
        {
            cout << n << " is prime" << endl;
            return 0;
        }
        i++;
    }
}