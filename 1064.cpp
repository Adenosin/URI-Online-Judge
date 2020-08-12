#include <iostream>

using namespace std;

int main()
{
    float s=0, i=6;
    float a, p=0, r=0;
    while (s<i)
    {
        cin >> a;
        if (a>0)
        {
            r+=a;
            p++;
        }
        s++;
    }
    cout << p << " valores positivos" << endl;
    cout << r/p << endl;
    return 0;
}
