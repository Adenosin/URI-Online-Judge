#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double M[12][12];
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
    for (int i=0; i<5; i++)
    {
        cont = i+1;
        while (cont<11-i)
        {
            R += M[11-i][cont];
            cont++;
        }
    }
    if (O=='S')
        cout << fixed << setprecision(1) << R << endl;
    else
        cout << fixed << setprecision(1) << R/30 << endl;
    return 0;
}
