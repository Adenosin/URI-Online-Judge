#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (a<0) a*=-1;
    if (b<0) b*=-1;
    double n=1;
    vector<int> v;
    for (int i=2; i<=min(a,b); i++)
    {
        while ((a%i==0) && (b%i==0)){
            v.push_back(i);
            //cout << i << endl;
            a/=i;
            b/=i;
        }
        //cout << a << " " << b << endl;
    }
    for (int i=0; i<v.size(); i++)
        n*=v[i];
    return n;
}
int main()
{
    int n;
    int n1, n2, d1, d2, n3, d3;
    char mierda, sign;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> n1 >> mierda >> d1 >> sign >> n2 >> mierda >> d2;
        if (sign==43)
        {
            n3 = n1*d2 + n2*d1;
            d3 = d1*d2;
            if ((n3<0) && (d3<0))
            {
                n3*=-1;
                d3*=-1;
            }
            if (n3==0)
                cout << "/" << d3 << " = " << "/1" << endl;
            else
            {
                cout << n3 << "/" << d3;
                cout << " = ";
                cout << n3/gcd(n3, d3) << "/" << d3/gcd(n3, d3) << endl;
            }
        }
        if (sign==45)
        {
            n3 = n1*d2 - n2*d1;
            d3 = d1*d2;
            if ((n3<0) && (d3<0))
            {
                n3*=-1;
                d3*=-1;
            }
            if (n3==0)
                cout << "/" << d3 << " = " << "/1" << endl;
            else
            {
                cout << n3 << "/" << d3;
                cout << " = ";
                cout << n3/gcd(n3, d3) << "/" << d3/gcd(n3, d3) << endl;
            }
        }
        if (sign==42)
        {
            n3 = n1*n2;
            d3 = d1*d2;
            if ((n3<0) && (d3<0))
            {
                n3*=-1;
                d3*=-1;
            }
            if (n3==0)
                cout << "/" << d3 << " = " << "/1" << endl;
            else
            {
                cout << n3 << "/" << d3;
                cout << " = ";
                cout << n3/gcd(n3, d3) << "/" << d3/gcd(n3, d3) << endl;
            }
        }
        if (sign==47)
        {
            n3 = n1*d2;
            d3 = n2*d1;
            if ((n3<0) && (d3<0))
            {
                n3*=-1;
                d3*=-1;
            }
            if (n3==0)
                cout << "/" << d3 << " = " << "/1" << endl;
            else
            {
                cout << n3 << "/" << d3;
                cout << " = ";
                cout << n3/gcd(n3, d3) << "/" << d3/gcd(n3, d3) << endl;
            }
        }
    }
    /*char k;
    for (int i=0; i<300; i++)
    {
        k = i;
        cout << i << "   " << k << endl;
    }*/
    return 0;
}
/*
42   *
43   +
44   ,
45   -
46   .
47   /
*/
