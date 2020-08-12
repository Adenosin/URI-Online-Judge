#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i=0;
    cin >> n;
    if (n>5 and n<2000)
    {
        while (i<n)
        {
            i++;
            if (i%2==0)
            {
                cout << i << "^2 = " << i*i << endl;
            }
        }
    }
    return 0;
}
