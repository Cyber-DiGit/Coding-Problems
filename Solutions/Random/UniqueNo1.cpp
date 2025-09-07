#include <iostream>
using namespace std;

int main()
{
    int n, i, no, uniqueNo;
    cout << "Enter any odd number of Elements: ";
    cin >> n;
    i = 0;
    uniqueNo = 0;

    while (i < n)
    {
        cin >> no;

        uniqueNo = uniqueNo ^ no;
        i++;
    }
    cout << "The unique number is: " << uniqueNo << endl;
    return 0;
}