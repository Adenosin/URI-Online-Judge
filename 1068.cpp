#include <iostream>

using namespace std;

int main()
{
    int cont;
    bool wea;
    string n;
    while (cin >> n)
    {
        cont = 0;
        wea = true;
        for (int i=0; i<n.length(); i++)
        {
            if (n[i]=='(') cont++;
            else if (n[i]==')') cont--;
            if (cont<0) wea = false;
        }
        if (cont!=0) wea = false;
        if (wea) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }
    return 0;
}
