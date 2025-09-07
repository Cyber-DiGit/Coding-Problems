#include <iostream>
using namespace std;

/*
Downward Triangle pattern using stars with a certain number of rows.
Output:
Enter the number of rows: 6
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/
void DownwardTriangle(int n);

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    DownwardTriangle(n);
    return 0;
}





void DownwardTriangle(int n)
{    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

