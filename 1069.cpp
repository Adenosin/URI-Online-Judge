#include <iostream>

using namespace std;

int main()
{
    int n, cont, diams;
    string s;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> s;
        cont = 0;
        diams = 0;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i]=='<') cont++;
            else if (s[i]=='>')
            {
                if (cont>0) diams++;
                cont--;
            }
            if (cont<0) cont = 0;
        }
        cout << diams << endl;
    }
    return 0;
}
