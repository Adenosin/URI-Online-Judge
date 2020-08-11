#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float s;
    float p1, p2, p3, p4, p5;
    cin >> s;
    p1 = s*15/100;
    p2 = s*12/100;
    p3 = s*10/100;
    p4 = s*7/100;
    p5 = s*4/100;

    if (s>=0 and s<=400)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << s+p1 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << p1 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    if (s>400 and s<=800)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << s+p2 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << p2 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    if (s>800 and s<=1200)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << s+p3 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << p3 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    if (s>1200 and s<=2000)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << s+p4 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << p4 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    if (s>2000)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << s+p5 << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << p5 << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}
