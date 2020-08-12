#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x==y)
    {
        if (x%5==2 or x%5==3)
            cout << x << endl;
    }
    else
    {
        if (x>y)
        {
            while (y<x-1)
            {
                y++;
                if (y%5==2 or y%5==3)
                    cout << y << endl;
            }
        }
        if (y>x)
        {
            while (x<y-1)
            {
                x++;
                if (x%5==2 or x%5==3)
                    cout << x << endl;
            }
        }
    }
    return 0;
}
