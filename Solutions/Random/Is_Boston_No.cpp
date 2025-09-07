#include <iostream>
#include <cmath>
using namespace std;
int SD(int n);
bool IsPrime(int n);
bool IsBoston(int n);

int main()
{
    int no = 0;
    cin >> no;
    cout << IsBoston(no) << endl;
    return 0;
}

//Sum of Digits
int SD(int n)
{
    int SD = 0;
    while(n > 0)
    {
        SD += n % 10;
        n /= 10;
    }
    return SD;
}

//IsPrime 0-->false, 1--> true
bool IsPrime(int n)
{
    bool Prime = true;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

//IsBoston
bool IsBoston(int n)
{
    if (IsPrime(n))
    {
        return false;
    }
    int FactorDSum = 0, x = n;
    for(int i = 2; i <= x; i++)
    {
        if(IsPrime(i))
        {
            while(x % i == 0)
            {
                FactorDSum += SD(i);
                x /= i;
            }
        }
    }
    return(FactorDSum == SD(n));
}