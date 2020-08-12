#include <iostream>

using namespace std;

int main()
{
    int n, s=1, i=10;
    cin >> n;
    while (s<=i)
    {
        cout << s << " x " << n << " = " << s*n << endl;
        s++;
    }
    return 0;
}
