#include <iostream>

using namespace std;

int main()
{
    int i, a, b;
    for (i=0; i<10; i=0)
    {
        cin >> a >> b;
        if (a==b)
        {
            return 0;
        }
            if (a>b)
            {
                cout << "Decrescente" << endl;
            }
            else
            {
                cout << "Crescente" << endl;
            }
    }
    return 0;
}
