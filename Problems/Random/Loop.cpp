#include <iostream>
using namespace std;

int main() {

    cout << "Enter a number: ";

    int n;

    cin >> n;

    int i = 0;
    int sum = 0;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum of numbers from 0 to " << n << " is: " << sum << endl;

    return 0;
    
}