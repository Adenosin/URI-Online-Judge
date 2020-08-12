#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, x, y, t=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
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
                        t+=y;
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
                        t+=x;
                    }
                }
            }
            cout << t << endl;
            t-=t;
        }
    }
    return 0;
}
