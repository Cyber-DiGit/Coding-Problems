#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = 2;
    int N, flag;
    cout << "Enter a number N: ";
    cin >> N;
    cout << "Prime numbers between 2 and " << N << " are: " << endl;
    while (i < N)
    {
        flag = 1;
        j = 2;
        while (j < i)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            j++;
        }

        if (flag == 1)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}