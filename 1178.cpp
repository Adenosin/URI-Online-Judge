#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x;
    int i;

    cin >> x;
    for (i=0; i<100; i++)
    {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << x << endl;
        x/=2;
    }
    return 0;
}
