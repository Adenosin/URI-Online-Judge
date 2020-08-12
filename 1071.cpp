#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, i=0;
    cin >> x >> y;
    if (x==y)
    {
        cout << "0" << endl;
    }
    else
    {
        if (x>y)
        {
            while (y<x-1)
            {
                y++;
                if (y%2!=0)
                {
                    i+=y;
                }
            }
        }
        if (x<y)
        {
            while (y>x+1)
            {
                x++;
                if (x%2!=0)
                {
                    i+=x;
                }
            }
        }
        cout << i << endl;
    }
    return 0;
}
