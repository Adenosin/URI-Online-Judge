#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float M[12][12];
    char O;
    double R=0;
    int cont;
    cin >> O;
    for (int i=0; i<12; i++)
    {
        for (int j=0; j<12; j++)
        {
            cin >> M[i][j];
        }
    }
    cont = 0;
    for (int i=0; i<11; i++)
    {
        cont = i+1;
        while (cont<12)
        {
            R += M[11-i][11-cont];
            cont++;
        }
    }
    if (O=='S')
        cout << fixed << setprecision(1) << R << endl;
    else
        cout << fixed << setprecision(1) << R/66 << endl;
    return 0;
}
