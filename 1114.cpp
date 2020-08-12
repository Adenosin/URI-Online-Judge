#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string pass;
    for (int i=0; i<1; i=i)
    {
        cin >> pass;
        if (pass=="2002")
        {
            cout << "Acesso Permitido" << endl;
            return 0;
        }
        else
        {
            cout << "Senha Invalida" << endl;
        }
    }
}
