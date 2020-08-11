#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, pa, pb, pc;
    cin >> a >> b >> c;
    if (a>=b and a>=c)
    {
        double A=a, B=b, C=c;
        pa = pow (A,2);
        pb = pow (B,2);
        pc = pow (C,2);

        if (A >= B+C)
        {
            cout << "NAO FORMA TRIANGULO" << endl;
        }
        else
        {
            if (pa == pb+pc)
            {
                cout << "TRIANGULO RETANGULO" << endl;
            }
            if (pa > pb+pc)
            {
                cout << "TRIANGULO OBTUSANGULO" << endl;
            }
            if (pa < pb+pc)
            {
                cout << "TRIANGULO ACUTANGULO" << endl;
            }
        }
    }
    else
    {
        if (b>=a and b>=c)
        {
            double A=b, B=a, C=c;
            pa = pow (A,2);
            pb = pow (B,2);
            pc = pow (C,2);

            if (A >= B+C)
            {
                cout << "NAO FORMA TRIANGULO" << endl;
            }
            else
            {
                if (pa == pb+pc)
                {
                    cout << "TRIANGULO RETANGULO" << endl;
                }
                if (pa > pb+pc)
                {
                    cout << "TRIANGULO OBTUSANGULO" << endl;
                }
                if (pa < pb+pc)
                {
                    cout << "TRIANGULO ACUTANGULO" << endl;
                }
            }
        }
        else
        {
            if (c>=a and c>=b)
            {
                double A=c, B=a, C=b;
                pa = pow (A,2);
                pb = pow (B,2);
                pc = pow (C,2);
                
                if (A >= B+C)
                {
                    cout << "NAO FORMA TRIANGULO" << endl;
                }
                else
                {

                    if (pa == pb+pc)
                    {
                        cout << "TRIANGULO RETANGULO" << endl;
                    }
                    if (pa > pb+pc)
                    {
                        cout << "TRIANGULO OBTUSANGULO" << endl;
                    }
                    if (pa < pb+pc)
                    {
                        cout << "TRIANGULO ACUTANGULO" << endl;
                    }
                }
            }
        }
    }
        if (a==b and b==c)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else
        {
            if (a==b or b==c or a==c)
            {
                cout << "TRIANGULO ISOSCELES" << endl;
            }
        }
    return 0;
}
