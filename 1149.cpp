#include <iostream>

using namespace std;

int main()
{
    int a, n=0, f, s=0;
    cin >> a;
    while (n<=0)
    {
        cin >> n;
    }
    f = a+n;
    while (a<f)
    {
        s+=a;
        a++;
    }
    cout << s << endl;
    return 0;
}
