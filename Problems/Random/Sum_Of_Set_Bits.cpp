//* APPROACH: 1 (USING REMAINDERS)

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Press ctrl + C to exit the Program." << endl;
//     while (true)
//     {
//         int n, count = 0;
//         cout << "Enter a number: ";
//         cin >> n;
//         for (int rem = 0; n > 0; n /= 2)
//         {
//             rem = n % 2;
//             count += rem;
//         }
//         cout << "Sum of its Set Bits is: " << count << endl;
//     }
// }

//* APPROACH: 2 (USING BIT & OPERATOR TO READ THE LSB)

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for (int d = 0; n > 0; n >>= 1)
    {
        d = n & 1;
        count += d;
    }
    cout << count << endl;
    return 0;
}