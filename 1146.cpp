#include <iostream>

using namespace std;

int main()
{
    int x, i;
    while (0<1)
    {
        cin >> x;
        if (x==0)
            return 0;
        for (i=1; i<x+1 ; i++)
        {
            cout << i;
            if (i==x)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}
