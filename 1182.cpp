#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int C;
    char T;
    float M[12][12];
    double R=0;
    cin >> C;
    cin >> T;
    for (int i=0; i<12; i++)
    {
        for (int j=0; j<12; j++)
        {
            cin >> M[i][j];
        }
    }
    if (T=='S')
    {
        for (int i=0; i<12; i++)
            R += M[i][C];
    }
    if (T=='M')
    {
        for (int i=0; i<12; i++)
            R += M[i][C];

        R /= 12;
    }
    cout << fixed << setprecision(1) << R << endl;
    return 0;
}
