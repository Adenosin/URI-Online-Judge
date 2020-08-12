#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    string DiaA, DiaB;
    char z1, z2, y1, y2;
    int long long t1, t2, tt;
    int long long w, x, y, z;

    cin >> DiaA >> d1;
    cin >> h1 >> z1 >> m1 >> z2 >> s1;
    cin >> DiaB >> d2;
    cin >> h2 >> y1 >> m2 >> y2 >> s2;

    t1 = (((d1*24) + h1)*60 + m1)*60 + s1;
    t2 = (((d2*24) + h2)*60 + m2)*60 + s2;
    tt = t2 - t1;
    w = (tt)/(86400);
    x = (tt - w*86400)/3600;
    y = (tt - w*86400 - x*3600)/60;
    z = tt - w*86400 - x*3600 - y*60;

    cout << w << " dia(s)" << endl;
    cout << x << " hora(s)" << endl;
    cout << y << " minuto(s)" << endl;
    cout << z << " segundo(s)" << endl;
    return 0;
}
