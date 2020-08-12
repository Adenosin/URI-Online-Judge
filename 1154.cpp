#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double long a, s=0, n=0;
    while (0<1)
    {
        cin >> a;
        if (a<=0)
        {
            cout << fixed << setprecision(2) << s/n << endl;
            return 0;
        }
        else
        {
            s+=a;
            n++;
        }
    }
}
