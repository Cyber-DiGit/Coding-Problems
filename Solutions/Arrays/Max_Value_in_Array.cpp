#include <iostream>
using namespace std;
int main()
{
    int N, l;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    l = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (l < arr[i])
        {
            l = arr[i];
        }
    }
    cout << l << endl;
    delete[] arr;
    return 0;
}
