#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int* arr = new int[N];
    int* arr_ = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        arr_[i] = arr[i];
    }
    for (int j = 0; j < N; j++)
    {
        int i = j;
        swap(arr[i], arr_[j]);
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    delete[] arr_;
    return 0;
}
