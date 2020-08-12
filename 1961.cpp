#include <iostream>

using namespace std;

int main()
{
    int p, n;

    int a, b;

    cin >> p >> n;

    int m[n];
    int i, j;

    bool vida = true;

    for (i=0; i<n; i++)
    {
        cin >> m[i];
    }

    for (i=0; i<n-1; i++)
    {
        j = i+1;
        a = m[i];
        b = m[j];
        // b-p < a > b+p
        if (a>b+p || a<b-p)
        {
            vida = false;
            break;
        }
    }
    if (vida == true)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;

    return 0;
}
