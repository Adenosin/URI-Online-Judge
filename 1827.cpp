#include <iostream>

using namespace std;

int main()
{
    int n;
    int insquare, middle;
    int cont1, cont2;
    while (cin >> n)
    {
        //if (k>0) cout << endl;
        middle = (n-1)/2;
        insquare = n/3;
        cont1 = 0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if ((i==middle) && (j==middle)) cout << "4";
                else if (((j>=insquare)&&(j<=n-insquare-1)) && ((i>=insquare)&&(i<=n-insquare-1))) cout << "1";
                else if (j==cont1)              cout << "2";
                else if (j==n-cont1-1)          cout << "3";
                else                            cout << "0";
            }
            cout << endl;
            cont1++;
        }
        //k++;
        cout << endl;
    }
    return 0;
}
