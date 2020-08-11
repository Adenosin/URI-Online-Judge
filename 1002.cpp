#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double R, pi=3.14159, area;
    cin >> R;
    area = pi*R*R;
    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}
