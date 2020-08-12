#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int s=0, x=-1, i;
    cin >> i;
    while (s<=i)
    {
        x++;
        if (x%2==1)
        {
            cout << x << endl;
        }
        s++;
    }
    return 0;
}
