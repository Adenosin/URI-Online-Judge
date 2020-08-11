#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;
    x=a/2;
    if (b>c)
    {
        if (d>a)
        {
            if (c+d>a+b)
            {
                if (c>0)
                {
                    if (d>0)
                    {
                        if (2*x==a)
                        {
                            cout << "Valores aceitos" << endl;
                        }
                        else
                        {
                            cout << "Valores nao aceitos" << endl;
                        }
                    }
                    else
                    {
                        cout << "Valores nao aceitos" << endl;
                    }
                }
                else
                {
                    cout << "Valores nao aceitos" << endl;
                }
            }
            else
            {
                cout << "Valores nao aceitos" << endl;
            }
        }
        else
        {
            cout << "Valores nao aceitos" << endl;
        }
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}
