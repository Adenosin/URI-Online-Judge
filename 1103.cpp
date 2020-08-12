#include <iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2;
    int h, m;
    while (true)
    {
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1==0 && m1==0 && h2==0 && m2==0) return 0;

        else if (h1==h2){
            if (m1==m2){
                cout << 0 << endl;
            }
            else if (m1>m2){
                h = 23;
                m = h*60 + 60-(m1-m2);
                cout << m << endl;
            }
            else{
                m = m2-m1;
                cout << m << endl;
            }
        }
        else if (h1>h2){
            if (m1==m2){
                h = 24 - (h1-h2);
                m = h*60;
                cout << m << endl;
            }
            else if (m1>m2){
                h = 24 - (h1-h2) -1;
                m = h*60 + 60-(m1-m2);
                cout << m << endl;
            }
            else{
                h = 24 - (h1-h2);
                m = h*60 + (m2-m1);
                cout << m << endl;
            }
        }
        else{
            if (m1==m2){
                h = h2-h1;
                m = h*60;
                cout << m << endl;
            }
            else if (m1>m2){
                h = h2-h1-1;
                m = h*60 + 60-(m1-m2);
                cout << m << endl;
            }
            else{
                h = h2-h1;
                m = h*60 + (m2-m1);
                cout << m << endl;
            }
        }
    }
}
