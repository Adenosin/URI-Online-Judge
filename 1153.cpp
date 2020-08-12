#include <iostream>

using namespace std;

int perm(int a)
{
    int t=1;
    if (a==1)
        cout << a << endl;
    else
    {
        for (int i=1; i<a+1; i++)
        {
            t *= i;
        }
    }
    return t;
}

int main()
{
    int n;
    cin >> n;
    cout << perm(n) << endl;
    return 0;
}
