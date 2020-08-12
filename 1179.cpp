#include <iostream>

using namespace std;

int main()
{
    int C[15];
    int P[5], I[5];
    int p=0, i=0;
    for (int c=0; c<15; c++)
    {
        cin >> C[c];
    }
    for (int c=0; c<15; c++)
    {
        if (C[c]%2==0){
            P[p] = C[c];
            p++;
        }
        else{
            I[i] = C[c];
            i++;
        }
        if (p==5){
            for(int j=0; j<5; j++)
            {
                cout << "par[" << j << "] = " << P[j] << endl;
            }
            p = 0;
        }
        if (i==5){
            for(int j=0; j<5; j++)
            {
                cout << "impar[" << j << "] = " << I[j] << endl;
            }
            i = 0;
        }
    }
    for (int j=0; j<i; j++)
    {
        cout << "impar[" << j << "] = " << I[j] << endl;
    }
    for (int j=0; j<p; j++)
    {
        cout << "par[" << j << "] = " << P[j] << endl;
    }
    return 0;
}
