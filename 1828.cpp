#include <iostream>

using namespace std;

int coloration(string K)
{
    if (K=="Spock")          return 0;
    else if (K=="lagarto")   return 1;
    else if (K=="pedra")     return 2;
    else if (K=="papel")     return 3;
    else if (K=="tesoura")   return 4;
}
int main()
{
    string S, R;
    int n, N;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> S >> R;

        N = coloration(S)+coloration(R);
        if (coloration(S)==coloration(R)) cout << "Caso #" << i+1 << ": De novo!" << endl;
        else if (coloration(S)>coloration(R))
            if (N%2==1) cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else        cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
        else
            if (N%2==0) cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else        cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
    }
    return 0;
}
