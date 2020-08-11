#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    double distance=x*y;
    cout << fixed << setprecision(3) << distance/12 << endl;
    return 0;
}
