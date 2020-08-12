#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, n;
    int a, b;
    cin >> n;
    string car;
    for (i=0; i<n; i++)
    {
        cin >> car;
        if (car[0]==car[2])
        {
            a = car[0]-48;
            b = car[2]-48;
            cout << a*b << endl;
        }
        else
        {
            if (car[1]>='A' and car[1]<='Z')
            {
                a = car[0]-48;
                b = car[2]-48;
                cout << b-a << endl;
            }
            if (car[1]>='a' and car[1]<='z')
            {
                a = car[0]-48;
                b = car[2]-48;
                cout << b+a << endl;
            }
        }

    }
    return 0;
}
