#include <iostream>

using namespace std;

int main()
{
    int x, y, s=0;
    cin >> x >> y;
    if (x==y)
        cout << x << endl;
    else
    {
        if (x<y)
        {
            while (x<y)
            {
                if (x%13!=0)
                    s+=x;
                x++;
            }
            if (y%13!=0)
                s+=y;
        }
        if (y<x)
        {
            while (y<x)
            {
                if (y%13!=0)
                    s+=y;
                y++;
            }
            if (x%13!=0)
                s+=x;
        }
        cout << s << endl;
    }
    return 0;
}
