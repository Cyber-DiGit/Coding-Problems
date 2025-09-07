#include <iostream>
using namespace std;

int main()
{
    char alphabet;
    cout << "Enter an alphabet character: ";
    cin >> alphabet;
    if (alphabet >= 65 && alphabet <= 90)
    {
        cout << "Uppercase" << endl;
        return 0;
    }
    else if (alphabet >= 97 && alphabet <= 122)
    {
        cout << "Lowercase" << endl;
        return 0;
    }
    else
    {
        cout << "Not an alphabet character" << endl;
        return 1;
    }
}