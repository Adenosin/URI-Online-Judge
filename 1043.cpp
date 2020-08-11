#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c, area;
    cin >> a >> b >> c;
    area=(b*c/2)+(a*c/2);
    if (a<(b+c) and b<(a+c) and c<(a+b))
    {
        cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << endl;
    }
    else
    {
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
    return 0;
}
