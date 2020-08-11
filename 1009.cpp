#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string A;
    double B, C, total;
    cin >> A >> B >> C;
    total = B + 0.15*C;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}
