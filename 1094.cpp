#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int a, n, i=0;
    float tc=0, tr=0, ts=0;
    float pc, pr, ps, t=0;
    string C="C", R="R", S="S", c;
    cin >> n;
    while (i<n)
    {
        cin >> a >> c;
        t+=a;
        if (c==C)
        {
            tc+=a;
        }
        if (c==R)
        {
            tr+=a;
        }
        if (c==S)
        {
            ts+=a;
        }
        i++;
    }
    pc = (tc*100)/t;
    pr = (tr*100)/t;
    ps = (ts*100)/t;
    cout << "Total: " << t << " cobaias" << endl;
    cout << "Total de coelhos: " << tc << endl;
    cout << "Total de ratos: " << tr << endl;
    cout << "Total de sapos: " << ts << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << pc << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << pr << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ps << " %" << endl;
    return 0;
}
