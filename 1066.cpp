#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int s=0, i=5;
    int a, t=0, u=0, v=0, w=0;
    while (s<i)
    {
        cin >> a;
        if (a%2==0)
        {
            t++;
        }
        if (a%2!=0)
        {
            u++;
        }
        if (a>0)
        {
            v++;
        }
        if (a<0)
        {
            w++;
        }
        s++;
    }
    cout << t << " valor(es) par(es)" << endl;
    cout << u << " valor(es) impar(es)" << endl;
    cout << v << " valor(es) positivo(s)" << endl;
    cout << w << " valor(es) negativo(s)" << endl;
    return 0;
}
