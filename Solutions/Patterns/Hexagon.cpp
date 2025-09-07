#include <iostream>
using namespace std;

void printHexagon(int n);
//       *  
//    *     *  
// *           *  
// *           *  
// *           *  
//    *     *  
//       *  

int main()
{
      // length of a side
      int n;
      cin >> n;
      printHexagon(n);
      return 0;
}

void printHexagon(int n)
{
      // h is the height of hexagon
      int h = 2 * n - 1;

      for (int i = 0; i < n; i++)
      {
            int s = i + n;
            for (int k = 0; k < s; k++)
            {
                  if ((k == n + i - 1) || (k == n - i - 1))
                  {
                        cout << "*  ";
                  }
                  else
                  {
                        cout << "   ";
                  }
            }
            cout << endl;
      }

      for (int i = 0; i < n - 2; i++)
      {
            for (int j = 0; j < h; j++)
            {
                  if (j == 0 || j == h - 1)
                  {
                        cout << "*  ";
                  }
                  else
                  {
                        cout << "   ";
                  }
            }
            cout << endl;
      }

      for (int h = n - 1; h >= 0; h--)
      {
            int s = h + n;
            for (int k = 0; k < s; k++)
            {
                  if ((k == n - h - 1) || (k == n + h - 1))
                  {
                        cout << "*  ";
                  }
                  else
                  {
                        cout << "   ";
                  }
            }
            cout << endl;
      }
}