#include <iostream>

using namespace std;

int main()
{
    int long t, i, anos=0;
    int long pa, pb;
    double g1, g2;
    cin >> t;
    for (i=0; i<t; i++)
    {
        anos = 0;
        cin >> pa >> pb;
        cin >> g1 >> g2;
        while (0<1)
        {
            if (pa>pb)
            {
                cout << anos << " anos." << endl;
                break;
            }
            pa = pa+g1*pa/100;
            pb = pb+g2*pb/100;
            anos++;
            if (anos>100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
    }
}
