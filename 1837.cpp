#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    int q, r;
    cin >> a >> b;
    q = a/b;
    r = a - b*q;
    ///cout << q << " " << r << endl;
    if (a<b)
    {
        if (a<0)
        {
            if (b<0)
            {
                while (r<0)
                {
                    r-=b;
                    q++;
                }
            }
            else
            {
                while (r<0)
                {
                    r+=b;
                    q--;
                }
            }
        }
    }
    if (a>b)
    {
        if (a<0 && b<0)
        {
            q++;
            r-=b;
        }
    }
    cout << q << " " << r << endl;
    return 0;
}
