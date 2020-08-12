#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

double long print(long p, long maxp)
{
    if (maxp<10)
        printf("%1u", p);
    else if (maxp<100)
        printf("%2u", p);
    else if (maxp<1000)
        printf("%3u", p);
    else if (maxp<10000)
        printf("%4u", p);
    else if (maxp<100000)
        printf("%5u", p);
    else if (maxp<1000000)
        printf("%6u", p);
    else if (maxp<10000000)
        printf("%7u", p);
    else if (maxp<100000000)
        printf("%8u", p);
    else if (maxp<1000000000)
        printf("%9u", p);
    else if (maxp<10000000000)
        printf("%10u", p);
}
int main()
{
    int n;
    int k=0;
    double long p, maxp;
    n = 1;
    while (n!=0)
    {
        cin >> n;
        if(k!=0) cout << endl;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (j!=0) cout << " ";
                p = pow(2,i+j);
                maxp = pow(2,(n-1)+(n-1));
                print(p, maxp);
            }
            cout << endl;
        }
        k++;
        //cout << endl;
    }
    return 0;
}
