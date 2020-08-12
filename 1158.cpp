#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int n, i, s=0;
    cin >> n;
    for (i=0; i<n; i++)
    {
        cin >> x >> y;
        if (x%2==0)
        {
            x = x+1;
        }
        while (y!=0)
        {
            s+=x;
            x = x+2;
            y--;
        }
        cout << s << endl;
        s = 0;
    }
    return 0;
}
