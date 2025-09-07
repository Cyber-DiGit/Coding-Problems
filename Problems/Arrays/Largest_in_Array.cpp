#include <iostream>
using namespace std;
int main()
{
    const int n = 10;
    int l = 0, arr[n] = {1, 2, 3, 4, 5, 6, 7, 8 ,9 , 10};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > l)
        {
            l = arr[i];
        }
    }
    cout << "Largest No: " << l;
}