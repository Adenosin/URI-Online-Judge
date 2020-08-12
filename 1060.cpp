#include <iostream>

using namespace std;

int main()
{
    float s, m=0, i=0, n=6;
    while (i<n)
    {
        cin >> s;
        if (s>0)
        {
            m++;
        }
        i++;
    }
    cout << m << " valores positivos" << endl;
    return 0;
}
