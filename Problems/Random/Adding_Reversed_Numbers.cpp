#include <iostream>
using namespace std;

//*Input:
 //* 3
 //* 24 1
 //* 4358 754
 //* 305 794
//* Output:
 //* 34
 //* 1998
 //* 1

unsigned long long int rev(unsigned long long int n);

int main()
{
    int i = 0, j, n;
    unsigned long long int x, sum;
    cin >> n;
    
    while (i < n)
    {
        j = 0;
        sum = 0;
        while (j < 2)
        {
            cin >> x;
            sum += rev(x);
            j++;
        }
        cout << rev(sum) << endl;
        i++;
    }
    return 0;

}

unsigned long long int rev(unsigned long long int n)
{
    unsigned long long int r;
    for (r = 0; n > 0; n /= 10)
    {
        r = r * 10 + (n % 10);
    }
    return r;
}