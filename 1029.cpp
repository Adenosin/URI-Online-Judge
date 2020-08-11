#include <iostream>

using namespace std;

int cont;
int fibo(int n)
{
    cont++;
    if (n==0) return 0;
    else if (n==1) return 1;
    else return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n, a, fib;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a;
        cont = 0;
        fib = fibo(a);
        cout << "fib(" << a << ") = " << cont-1 << " calls = " << fib << endl;
    }
    return 0;
}
