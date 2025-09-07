#include <iostream>
using namespace std;
// Insertion Sort
int main()
{
    int a[] = {1, 3, 0, 9 ,7, 4, 2, 78, 5, 8};
    int n = sizeof(a)/sizeof(int);

    for (int j = 1; j <= n - 1; j++)
    {
        int handpickedcard = a[j];
        int pos = j - 1;
        while (pos >= 0 and handpickedcard < a[pos])
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = handpickedcard;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
    