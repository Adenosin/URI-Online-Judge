#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n;
    float x, y, media;
    while (0<1)
    {
        cin >> n;
        if (n>=0 and n<=10)
        {
            x=n;
            while (0<1)
            {
                cin >> n;
                if (n>=0 and n<=10)
                {
                    y=n;
                    media = (x+y)/2;
                    cout << "media = " << fixed << setprecision(2) << media << endl;
                    return 0;
                }
                else
                {
                    cout << "nota invalida" << endl;
                }
            }
        }
        else
        {
        cout << "nota invalida" << endl;
        }
    }
}
