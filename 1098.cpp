#include <iostream>

using namespace std;

int main()
{
    float i=0, j=1;
    while (i<2.2)
    {
        cout << "I=" << i << " J=" << j << endl;
        j++;
        cout << "I=" << i << " J=" << j << endl;
        j++;
        cout << "I=" << i << " J=" << j << endl;
        j-=2;
        j+=0.2;
        i+=0.2;
    }
    return 0;
}
