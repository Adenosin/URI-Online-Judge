#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, a, t;
    int i=0, nc, j=0;
    while (0<1)
    {
        while (i<1)
        {
            cin >> n;
            if (n>=0 and n<=10)
            {
                a = n;
                while (i<1)
                {
                    cin >> n;
                    if (n>=0 and n<=10)
                    {
                        a = a+n;
                        t = a/2;
                        cout << "media = " << fixed << setprecision(2) << t << endl;
                        i = 1;
                    }
                    else
                    {
                        if (n<0 or n>10)
                        {
                            cout << "nota invalida" << endl;
                        }
                    }
                }
            }
            else
            {
                if (n<0 or n>10)
                {
                    cout << "nota invalida" << endl;
                }
            }
        }
        j = 0;
        while (j==0)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> nc;
            if (nc==1)
            {
                j = 1;
                i = 0;
            }
            if (nc==2)
            {
                return 0;
            }
        }
    }
}
