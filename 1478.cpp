#include <iostream>

using namespace std;

int print (int n)
{
    if (n==100)
        cout << n;
    else
    {
        if (n/10<1)
            cout << "  " << n;
        else
            cout << " "  << n;
    }
}
int main()
{
    int n;
    int p;
    int k=0, l=0;
    n = 1;
    while (n!=0)
    {
        cin >> n;
        if (l!=0) cout << endl;
        for (int i=1; i<=n; i++)
        {
            p = i;
            k = 0;
            for (int j=1; j<=n; j++)
            {
                if (j!=1) cout << " ";
                if (k==0)
                {
                    if (p==1) k++;
                    print(p);
                    p--;
                }
                else
                {
                    if (p==0) p+=2;
                    print(p);
                    p++;
                }
            }
            l++;
            cout << endl;
        }
    }
    return 0;
}
