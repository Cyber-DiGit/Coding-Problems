#include <iostream>
using namespace std;
int main()
{
    int a[] = {6, 1, 5, 7, 3, 8, 4, 0, 2, 9};
    int n = sizeof(a)/sizeof(int);
    for (int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for (int j = i+1; j < n; j++)
        {    
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        swap (a[i], a[min_index]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
