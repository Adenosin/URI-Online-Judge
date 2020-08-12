#include <iostream>

using namespace std;

int main()
{
    int i=1, j=7;
    while (j!=4)
    {
        cout << "I=" << i << " J=" << j << endl;
        j--;
        cout << "I=" << i << " J=" << j << endl;
        j--;
        cout << "I=" << i << " J=" << j << endl;
        j--;
        i+=2;
        if (i==11)
        {
            return 0;
        }
        if (j==4)
        {
            j=7;
        }
    }
}
