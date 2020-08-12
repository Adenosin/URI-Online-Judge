#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double s=0, i;
    for (i=1; i<101; i++)
    {
        s += 1/i;
    }
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}
