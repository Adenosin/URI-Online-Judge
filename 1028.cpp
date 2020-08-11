#include <iostream>

using namespace std;

int MCD (int a, int b) {
    if(b==0) return a;
    return MCD (b,a%b);
}
int main()
{
    int n;
    int a, b;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a >> b;
        cout << MCD(a,b) << endl;
    }
    return 0;
}
