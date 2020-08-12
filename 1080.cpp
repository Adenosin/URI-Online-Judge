#include <iostream>

using namespace std;

int main()
{
    int vector[100];
    int a, x;
    int i=0, j=2, l=0;
    while (i<100)
    {
        cin >> a;
        vector [i] = a;
        i++;
    }
    if (vector[0]>vector[1])
    {
        x = vector[0];
    }
    else
    {
        x = vector[1];
    }
    while (j<100)
    {
        if (x>vector[j])
        {
            x = x;
        }
        else
        {
            x = vector[j];
        }
        j++;
    }
    cout << x << endl;
    while (l<100)
    {
        if (x==vector[l])
        {
            cout << l+1 << endl;
            return 0;
        }
        l++;
    }
    return 0;
}
