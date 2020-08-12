//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin>>n)
    //while( (scanf("%d", &n)) != EOF)
    {
        //cin >> n;
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                if (j==n-i+1)
                    cout << 2;
                else
                {
                    if (j==i)
                        cout << 1;
                    else
                        cout << 3;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
