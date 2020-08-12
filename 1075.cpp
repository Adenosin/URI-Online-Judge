#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, s=0, i=10000;
    cin >> n;
    while (s<i)
    {
        if (s%n==2)
        {
            cout << s << endl;
        }
        s++;
    }
    return 0;
}
