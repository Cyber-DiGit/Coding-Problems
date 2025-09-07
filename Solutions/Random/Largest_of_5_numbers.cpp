#include <iostream>
using namespace std;

int main()
{
    int i = 0, l, x;
    while (i < 5)
    {
        cin >> x;
        if (i == 0 || x > l)
        {
            l = x;
        }
        i++;
    }
    cout << l << endl;
    return 0;
}
