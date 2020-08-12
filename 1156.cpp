#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double long s=1, n=3, d=2;
    while (n<40)
    {
        s += n/d;
        n = n+2;
        d*=2;
    }
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}
