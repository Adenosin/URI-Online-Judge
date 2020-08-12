#include <iostream>

using namespace std;

int r(int a, int b)
{
    a = 9*a*a;
    b = b*b;
    return a+b;
}
int b(int a, int b)
{
    a = 2*a*a;
    b = 25*b*b;
    return a+b;
}
int c(int a, int b)
{
    a = (-100)*a;
    b = b*b*b;
    return a+b;
}
int main()
{
    int n, i;
    cin >> n;
    int x[n], y[n];
    for (i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];

        if (r(x[i], y[i])>b(x[i], y[i]) and r(x[i], y[i])>c(x[i], y[i]))
        {
            cout << "Rafael ganhou" << endl;
        }
        if (b(x[i], y[i])>r(x[i], y[i]) and b(x[i], y[i])>c(x[i], y[i]))
        {
            cout << "Beto ganhou" << endl;
        }
        if (c(x[i], y[i])>b(x[i], y[i]) and c(x[i], y[i])>r(x[i], y[i]))
        {
            cout << "Carlos ganhou" << endl;
        }
    }
    return 0;
}
