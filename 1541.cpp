#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A;

    while (A!=0)
    {
        cin >> B >> C;
        C = sqrt((A*B*100)/C);
        cout << C << endl;
        cin >> A;
    }
    return 0;
}
