#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n;
    cin >> n;
    if (n>0 and n<= 2000)
    {
        cout << "Isento" << endl;
    }
    else
    {
        if (n>2000 and n<= 3000)
        {
            float a;
            a = n-2000;
            cout << "R$ " << fixed << setprecision (2) << (8*a)/100 << endl;
        }
        else
        {
            if (n>3000 and n<= 4500)
            {
                float a;
                a = n-3000;
                cout << "R$ " << fixed << setprecision (2) << 80+((18*a)/100) << endl;
            }
            else
            {
                if (n>4500)
                {
                    float a;
                    a = n-4500;
                    cout << "R$ " << fixed << setprecision (2) << 350+((28*a)/100) << endl;
                }
            }
        }
    }
    return 0;
}
