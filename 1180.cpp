#include <iostream>

using namespace std;

int main()
{
    int n;
    int pos;
    cin >> n;
    int N[n];
    for (int i=0; i<n; i++){
        cin >> N[i];
    }
    pos=0;
    for (int i=1; i<n; i++){
        if(N[i]<N[pos]) pos = i;
    }
    cout << "Menor valor: " << N[pos] << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}
