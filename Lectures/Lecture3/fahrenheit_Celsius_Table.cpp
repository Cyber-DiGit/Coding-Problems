#include <iostream>
using namespace std;

int main()
{
    int initial, final, step;
    cout << "Initial: ";
    cin >> initial;
    cout << "Final: ";
    cin >> final;
    cout << "Step: ";
    cin >> step;

    if (step <= 0)
    {
        cout << "Step must be greater than 0." << endl;
        return 1;
    }
    if (initial > final)
    {
        cout << "Initial must be less than or equal to Final." << endl;
        return 1;
    }
    for (int i = initial; i <= final; i += step)
    {
        cout << i << "\t" << (i - 32) * 5 / 9 << endl;
    }
    return 0;
}