#include <iostream>

using namespace std;

int main()
{
    int n[20];
    int i, j;
    for (i=0; i<20; i++)
    {
        cin >> n[i];
    }
    j = 19;
    for (i=0; i<20; i++)
    {
        cout << "N[" << i << "] = " << n[j] << endl;
        j--;
    }
    return 0;
}
