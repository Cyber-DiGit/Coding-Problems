#include <iostream>
using namespace std;

//*Input: 6
//*Output:
// 1	
// 1	1	
// 1	2	1	
// 1	3	3	1	
// 1	4	6	4	1	
// 1	5	10	10	5	1

int main()
{
    int n, c;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {   
        c = 1;
        for (int col = 1; col <= row; col++)
        {
            cout << c << "\t";
            c = c * (row - col) / col;
        }
        cout << endl;
    }   
}
