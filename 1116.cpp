#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, n;
    float total, x, y;
    cin >> n;
    for (i=0; i<n; i++)
    {
        cin >> x >> y;
        total = x/y;
        if ( y==0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            if (x==0)
            {
                cout << 0.0 << endl;
            }
            else
            {
                if (x<0 or y<0)
                {
                    cout << fixed << setprecision(1) << total << endl;
                }
                else
                {
                    cout << fixed << setprecision(1) << total << endl;
                }
            }
        }
    }
    return 0;
}
