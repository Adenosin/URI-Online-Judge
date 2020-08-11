#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A1, A2, B1, B2;
    float P1, P2, total1, total2;
    cin >> A1 >> A2 >> P1;
    total1 = P1*A2;
    cin >> B1 >> B2 >> P2;
    total2 = P2*B2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total1+total2 << endl;
    return 0;
}
