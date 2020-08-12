#include <iostream>

using namespace std;

int main()
{
    int x;
    int i;
    cin >> x;
    for (i=0; i<10; i++)
    {
        cout << "N[" << i << "] = " << x << endl;
        x*=2;
    }
    return 0;
}
