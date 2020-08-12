#include <iostream>

using namespace std;

int main()
{
    int x, y, i;
    cin >> x >> y;
    for (i=1; i<y+1 ; i++)
    {
        cout << i;
        if (i%x==0)
            cout << endl;
        else
            cout << " ";
    }
    return 0;
}
