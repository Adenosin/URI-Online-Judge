#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n, sum=0;
    while (1>0)
    {
        cin >> m >> n;
        if (m<=0 or n<=0)
        {
            return 0;
        }
        else
        {
            if (m==n)
            {
                cout << m << " Sum=" << m << endl;
            }
            if (m>n)
            {
                while (n<m)
                {
                    cout << n << " ";
                    sum+=n;
                    n++;
                }
                cout << m;
                sum+=m;
                cout << " Sum=" << sum << endl;
                sum-=sum;
            }
            if (n>m)
            {
                while (m<n)
                {
                    cout << m << " ";
                    sum+=m;
                    m++;
                }
                cout << n;
                sum+=n;
                cout << " Sum=" << sum << endl;
                sum-=sum;
            }
        }
    }
}
