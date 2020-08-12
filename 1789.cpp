#include <iostream>

using namespace std;

int main()
{
    int p, n;
    int maxelem;
    while (cin>>p)
    {
        maxelem = 1;
        for (int i=0; i<p; i++)
        {
            cin >> n;
            if (n>maxelem) maxelem = n;
        }
        if (maxelem<10)         cout << 1 << endl;
        else if (maxelem<20)    cout << 2 << endl;
        else if (maxelem>=20)   cout << 3 << endl;
    }
    return 0;
}
