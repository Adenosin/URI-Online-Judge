#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float A, B, C, salary;
    cin >> A >> B >> C;
    cout << "NUMBER = " << A << endl;
    salary = B*C;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
    return 0;
}
