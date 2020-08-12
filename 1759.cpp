#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long k=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        if (k!=0) cout << " ";
        cout << "Ho";
        k++;
    }
    cout << "!" << endl;
    return 0;
}
