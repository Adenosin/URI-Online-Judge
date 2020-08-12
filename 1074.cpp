#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i=0, a;
    cin >> n;
    do
    {
        cin >> a;
        if (a==0)
        {
            cout << "NULL" << endl;
        }
        if (a>0)
        {
            if (a%2==0)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else
            {
                cout << "ODD POSITIVE" << endl;
            }
        }
        if (a<0)
        {
            if (a%2==0)
            {
                cout << "EVEN NEGATIVE" << endl;
            }
            else
            {
                cout << "ODD NEGATIVE" << endl;
            }
        }
        i++;
    }
    while (i<n);
    return 0;
}
