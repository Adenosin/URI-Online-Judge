#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int grn=0, in=0, gr=0, em=0;
    int ne, final=0, i;
    while (final==0)
    {
        cin >> a >> b;
        grn++;
        if (a>b)
            in++;
        if (a<b)
            gr++;
        if (a==b)
            em++;
        i=0;
        while (i==0)
        {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> ne;
            if (ne==1)
            {
                i = 1;
            }
            if (ne==2)
            {
                cout << grn << " grenais" << endl;
                cout << "Inter:" << in << endl;
                cout << "Gremio:" << gr << endl;
                cout << "Empates:" << em << endl;
                if (in>gr)
                    cout << "Inter venceu mais" << endl;
                if (in<gr)
                    cout << "Gremio venceu mais" << endl;
                if (in==gr)
                    cout << "Nao houve vencedor" << endl;
                return 0;
            }
        }
    }
}
