#include <iostream>
using namespace std;
int main()
{
    int maxF, minF, step, C, F;
    cin >> minF >> maxF >> step;


    for (F = minF; F <= maxF; F += step)
    {
        C = 5 * (F - 32) / 9;

        cout << F << "\t" << C << endl;
    }
    return 0;
}