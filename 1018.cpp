#include <iostream>

using namespace std;

int main()
{
    int n, b100, b50, b20, b10, b5, b2, b1;
    cin >> n;
    if (n>0 and n<1000000)
    {
        cout << n << endl;
        b100=n/100;
        cout << b100 << " nota(s) de R$ 100,00" << endl;
        b50=(n-b100*100)/50;
        cout << b50 << " nota(s) de R$ 50,00" << endl;
        b20=(n-b100*100-b50*50)/20;
        cout << b20 << " nota(s) de R$ 20,00" << endl;
        b10=(n-b100*100-b50*50-b20*20)/10;
        cout << b10 << " nota(s) de R$ 10,00" << endl;
        b5=(n-b100*100-b50*50-b20*20-b10*10)/5;
        cout << b5 << " nota(s) de R$ 5,00" << endl;
        b2=(n-b100*100-b50*50-b20*20-b10*10-b5*5)/2;
        cout << b2 << " nota(s) de R$ 2,00" << endl;
        b1=(n-b100*100-b50*50-b20*20-b10*10-b5*5-b2*2);
        cout << b1 << " nota(s) de R$ 1,00" << endl;
    }
    else
    {
        return 0;
    }
    return 0;
}
