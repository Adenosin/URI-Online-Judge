#include <iostream>

using namespace std;

int main()
{
    int t, t0;
    int long i;

    cin >> t;
    t0 = 0;

    for (i=0; i<1000; i++)
    {
        if (t0 == t)
            t0 = 0;
        cout << "N[" << i << "] = " << t0 << endl;
        t0++;
    }
    return 0;
}
