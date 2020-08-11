#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    int x, y, tmina, tminb;
    int time1, time2;
    int ttime1, ttime2;
    int min1, min2;
    cin >> a >> b >> c >> d;
    x = 60*a;
    y = 60*c;
    tmina = x+b;
    tminb = y+d;
    time1 = tminb-tmina;
    time2 = tminb-tmina+1440;
    ttime1 = time1/60;
    ttime2 = time2/60;
    min1 = time1-ttime1*60;
    min2 = time2-ttime2*60;

    if (tmina==tminb)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else
    {
        if (tmina<tminb)
        {
            cout << "O JOGO DUROU " << ttime1 << " HORA(S) E " << min1 << " MINUTO(S)" << endl;
        }
        else
        {
            cout << "O JOGO DUROU " << ttime2 << " HORA(S) E " << min2 << " MINUTO(S)" << endl;
        }
    }
    return 0;
}
