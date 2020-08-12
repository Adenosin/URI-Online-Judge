#include <iostream>

using namespace std;

int main()
{
    int x, z=-1, s, c=1;
    cin >> x;
    s = x;
    while (z<=x)
        cin >> z;
    while (s<z)
    {
        x++;
        c++;
        s+=x;
    }
    cout << c << endl;
}
