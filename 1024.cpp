#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int c, mid;
    cin >> c;
    string n;
    for (int j=0; j<=c; j++)
    {
        getline(cin, n);
        if (j==0) continue;
        if (n.length()%2==0)
        {
            mid = n.length()/2;
            ///cout << mid << endl;
            for (int i=n.length()-1; i>=0; i--)
            {
                if ((n[i]>=97 && n[i]<=122))
                    n[i]+=3;
                if ((n[i]>=65 && n[i]<=90))
                    n[i]+=3;
                if (i<mid)
                {
                    n[i]--;
                }
                cout << n[i];
            }
            cout << endl;
        }
        else
        {
            mid = (n.length()+1)/2;
            ///cout << mid << endl;
            for (int i=n.length()-1; i>=0; i--)
            {
                if ((n[i]>=97 && n[i]<=122))
                    n[i]+=3;
                if ((n[i]>=65 && n[i]<=90))
                    n[i]+=3;
                if (i<mid)
                {
                    n[i]--;
                }
                cout << n[i];
            }
            cout << endl;
        }
    }
    return 0;
}
