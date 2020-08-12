#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, s=0, i=6;
    cin >> n;
    while (s<i)
    {
        n++;
        if (n%2==1)
        {
            cout << n << endl;
            s++;
        }
    }
    return 0;
}
