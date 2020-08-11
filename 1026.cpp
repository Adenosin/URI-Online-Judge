#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long int a, b, c;
    string as, bs, cs;
    while (cin >> a)
    {
        cin >> b;
        as = bitset<32> (a).to_string();
        bs = bitset<32> (b).to_string();
        ///cout << as << endl << bs << endl;
        cs = "00000000000000000000000000000000";
        for (int i=0; i<32; i++)
        {
            if (as[i]!=bs[i]) cs[i]='1';
            else if (as[i]==bs[i]) cs[i]='0';
        }
        ///cout << cs << endl;
        c = bitset<32> (cs).to_ulong();
        cout << c << endl;
    }
    return 0;
}
