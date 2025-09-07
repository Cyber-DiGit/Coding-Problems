#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N, M;
    cin >> N;
    int* arr = new int[N];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> M;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] == M)
        {
            cout << i;
            delete[] arr;
            return 0;
        }
    }
    cout << -1;
    delete[] arr;
    return 0;
}