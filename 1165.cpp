#include <iostream>

using namespace std;

int main()
{
    int n, i;
    int long long x, j;
    bool prim;
    cin >> n;
    for (i=0; i<n; i++)
    {
        prim = true;
        cin >> x;
        for (j=2; j<x; j++)
        {
            if (x%j==0)
            {
                prim = false;
                break;
            }
        }
        if (prim == true)
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;
    }
}
