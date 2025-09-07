#include <iostream>
using namespace std;

int main()
{
    int P;
    int R;
    int T;
    cout << "Enter principal amount: ";
    cin >> P;
    cout << "Enter rate of interest: ";
    cin >> R;
    cout << "Enter time in years: ";
    cin >> T;
    float SI = (P * R * T) / 100.00;
    cout << "Simple Interest is: " << SI << endl;
    return 0;
}