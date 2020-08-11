#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, discriminante;
    cin >> a >> b >> c;
    discriminante = pow(b,2)-4*a*c;
    if (discriminante>0)
    {
        if (2*a != 0)
        {
            cout << "R1 = " << fixed << setprecision(5) << (-b+sqrt(discriminante))/(2*a) << endl;
            cout << "R2 = " << fixed << setprecision(5) << (-b-sqrt(discriminante))/(2*a) << endl;
        }
        else
        {
            cout << "Impossivel calcular" << endl;
        }
    }
    else
    {
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}
