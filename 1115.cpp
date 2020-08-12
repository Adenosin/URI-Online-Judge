#include <iostream>

using namespace std;

int main()
{
    int a, b;
    for (int i=0; i<1; i=i)
    {
        cin >> a >> b;
        if (a==0 or b==0)
        {
            return 0;
        }
        else
        {
            if (a>0 and b>0)
            {
                cout << "primeiro" << endl;
            }
            if (a>0 and b<0)
            {
                cout << "quarto" << endl;
            }
            if (a<0 and b>0)
            {
                cout << "segundo" << endl;
            }
            if (a<0 and b<0)
            {
                cout << "terceiro" << endl;
            }
        }
    }
}
