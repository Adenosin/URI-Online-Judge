#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, m1;
    int r100, r50, r20, r10, r5, r2;
    int m100, m50, m25, m10, m5, m3;
    cin >> n;
    r100= n/100;
    r50= (n-r100*100)/50;
    r20= (n-r100*100-r50*50)/20;
    r10= (n-r100*100-r50*50-r20*20)/10;
    r5= (n-r100*100-r50*50-r20*20-r10*10)/5;
    r2= (n-r100*100-r50*50-r20*20-r10*10-r5*5)/2;
    m100= n-r100*100-r50*50-r20*20-r10*10-r5*5-r2*2;
    m50= (n-r100*100-r50*50-r20*20-r10*10-r5*5-r2*2-m100*1)/0.50;
    m25= (n-r100*100-r50*50-r20*20-r10*10-r5*5-r2*2-m100*1-m50*0.50)/0.25;
    m10= (n-r100*100-r50*50-r20*20-r10*10-r5*5-r2*2-m100*1-m50*0.50-m25*0.25)/0.10;
    m5= (n-r100*100-r50*50-r20*20-r10*10-r5*5-r2*2-m100*1-m50*0.50-m25*0.25-m10*0.10)/0.05;
    m1= (n-r100*100-r50*50-r20*20-r10*10-r5*5-r2*2-m100*1-m50*0.50-m25*0.25-m10*0.10-m5*0.05)/0.01;
    if (n>0 and n<1000000.00)
    {
        cout << "NOTAS:" << endl;
        cout << r100 << " nota(s) de R$ 100.00" << endl;
        cout << r50 << " nota(s) de R$ 50.00" << endl;
        cout << r20 << " nota(s) de R$ 20.00" << endl;
        cout << r10 << " nota(s) de R$ 10.00" << endl;
        cout << r5 << " nota(s) de R$ 5.00" << endl;
        cout << r2 << " nota(s) de R$ 2.00" << endl;
        cout << "MOEDAS:" << endl;
        cout << m100 << " moeda(s) de R$ 1.00" << endl;
        cout << m50 << " moeda(s) de R$ 0.50" << endl;
        cout << m25 << " moeda(s) de R$ 0.25" << endl;
        cout << m10 << " moeda(s) de R$ 0.10" << endl;
        cout << m5 << " moeda(s) de R$ 0.05" << endl;
        cout << fixed << setprecision(0) << m1 << " moeda(s) de R$ 0.01" << endl;
    }
    else
    {
        return 0;
    }
    return 0;
}
