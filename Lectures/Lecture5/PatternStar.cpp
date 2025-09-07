#include <iostream>
using namespace std;
#define Bolbhai cout <<
//** Print star Pattern.
/*
 *  * ***  *** *
 *  ** **  ** **
 *  *** *  * ***
 */

int main()
{
    int n, i, j;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            Bolbhai "*";
        }
        Bolbhai " ";
        for (j = 0; j <= n - i; j++)
        {
            Bolbhai "*";
        }
        Bolbhai "  ";
        for (j = 0; j <= n - i; j++)
        {
            Bolbhai "*";
        }
        Bolbhai " ";
        for (j = 1; j <= i; j++)
        {
            Bolbhai "*";
        }
        Bolbhai endl;
    }

    return 0;
}