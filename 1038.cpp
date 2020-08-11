#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    float p1, p2, p3, p4, p5;
    cin >> x >> y;
    p1= y*4.00;
    p2= y*4.50;
    p3= y*5.00;
    p4= y*2.00;
    p5= y*1.50;
    if (x==1)
    {
        cout << fixed << setprecision(2) << "Total: R$ " << p1 << endl;
    }
    else
    {
        if (x==2)
        {
            cout << fixed << setprecision(2) << "Total: R$ " << p2 << endl;
        }
        else
        {
            if (x==3)
            {
                cout << fixed << setprecision(2) << "Total: R$ " << p3 << endl;
            }
            else
            {
                if (x==4)
                {
                    cout << fixed << setprecision(2) << "Total: R$ " << p4 << endl;
                }
                else
                {
                    if (x==5)
                    {
                        cout << fixed << setprecision(2) << "Total: R$ " << p5 << endl;
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
