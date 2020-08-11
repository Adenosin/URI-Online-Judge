#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int R;
    double pi=3.14159, volume;
    cin >> R;
    volume = pi*R*R*R*4/3.0;
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    return 0;
}
