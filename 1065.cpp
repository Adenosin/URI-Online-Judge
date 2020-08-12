#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int s=0, i=5, r=0, a;
    while (s<i)
    {
        cin >> a;
        if (a%2==0)
        {
            r++;
        }
        s++;
    }
    cout << r << " valores pares" << endl;
    return 0;
}
