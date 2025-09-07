#include <iostream>
using namespace std;

int main()
{
    int L;
    int N;
    int i = 1;
    int tmp;
    cout << "Enter the number of elements: ";
    cin >> N;
    while (i <= N)
    {
        cout << "Enter element" << i << ": ";
        cin >> tmp;
        if (i == 1)
        {
            L = tmp;
        }
        if (L < tmp)
        {
            L = tmp;
        }
        i++;
    }
    cout << "The largest number is: " << L << endl;
    return 0;
}