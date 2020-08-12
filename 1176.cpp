#include <iostream>

using namespace std;

int main()
{
    int a;
    int t, i;

    int long long f[61];
    int j;

    cin >> t;
    f[0]=0;
    f[1]=1;

    for (j=2; j<=60; j++)
    {
        f[j] = f[j-2]+f[j-1];
    }
    for (i=0; i<t; i++)
    {
        cin >> a;
        cout << "Fib(" << a << ") = " << f[a] << endl;
    }
    return 0;
}
