#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a<b and a<c)
    {
        if (b<c)
        {
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
        else
        {
            cout << a << endl;
            cout << c << endl;
            cout << b << endl;
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
    }
    if (b<a and b<c)
    {
        if (a<c)
        {
            cout << b << endl;
            cout << a << endl;
            cout << c << endl;
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
        else
        {
            cout << b << endl;
            cout << c << endl;
            cout << a << endl;
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
    }
    if (c<a and c<b)
    {
        if (a<b)
        {
            cout << c << endl;
            cout << a << endl;
            cout << b << endl;
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
        else
        {
            cout << c << endl;
            cout << b << endl;
            cout << a << endl;
            cout << endl;
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
    }
    return 0;
}
