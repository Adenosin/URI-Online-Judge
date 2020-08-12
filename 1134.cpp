#include <iostream>

using namespace std;

int main()
{
    int n;
    int al=0, ga=0, di=0;
    while (0<1)
    {
        cin >> n;
        if (n==1)
            al++;
        if (n==2)
            ga++;
        if (n==3)
            di++;
        if (n==4)
        {
            cout << "MUITO OBRIGADO" << endl;
            cout << "Alcool: " << al << endl;
            cout << "Gasolina: " << ga << endl;
            cout << "Diesel: " << di << endl;
            return 0;
        }
    }
}
