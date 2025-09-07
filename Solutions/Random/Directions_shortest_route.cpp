#include <iostream>
using namespace std;

//*Input: NNEWSSWW
//*Output: EN 

int main()
{
    char c;
    int x = 0, y = 0;
    while (true)
    {
        c = cin.get();
        if (c == '\n')
        {
            break;
        }
        else if (c == 'N')
        {
            y += 1;
        }
        else if (c == 'S')
        {
            y -= 1;
        }
        else if (c == 'E')
        {
            x += 1;
        }
        else if (c == 'W')
        {
            x -= 1;
        }
    }
    while (x > 0)
    {
        cout << "E";
        x--;
    }
    while (y > 0)
    {
        cout << "N";
        y--;
    }
    while (y < 0)
    {
        cout << "S";
        y++;
    }
    while (x < 0)
    {
        cout << "W";
        x++;
    }
    return 0;
}