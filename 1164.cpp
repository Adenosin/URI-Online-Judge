#include <iostream>

using namespace std;

int long long sum(int long long x)
{
    int long long j, sun=0;
    for (j=1; j<x; j++)
    {
        if (x%j==0)
        {
            sun+=j;
        }
    }
    return sun;
}
int main()
{
    int n, i;
    int long long soma;
    int long long x;
    cin >> n;
    for (i=0; i<n; i++)
    {
        cin >> x;
        soma = sum(x);
        if (soma == x)
            cout << x << " eh perfeito" << endl;
        else
            cout << x << " nao eh perfeito" << endl;
    }
}
