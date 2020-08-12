#include <bits/stdc++.h>

using namespace std;

int tabla[8][8];
queue <int> xs;
queue <int> ys;

void movimientos(int x, int y)
{
    int xn, yn;
    if (x+2<8){
        if (y+1<8){
            if(tabla[x+2][y+1]==-1){
                tabla[x+2][y+1] = tabla[x][y]+1;
                xs.push(x+2);
                ys.push(y+1);
            }
        }
        if (y-1>=0){
            if(tabla[x+2][y-1]==-1){
                tabla[x+2][y-1] = tabla[x][y]+1;
                xs.push(x+2);
                ys.push(y-1);
            }
        }
    }
    if (x-2>=0){
        if (y+1<8){
            if(tabla[x-2][y+1]==-1){
                tabla[x-2][y+1] = tabla[x][y]+1;
                xs.push(x-2);
                ys.push(y+1);
            }
        }
        if (y-1>=0){
            if(tabla[x-2][y-1]==-1){
                tabla[x-2][y-1] = tabla[x][y]+1;
                xs.push(x-2);
                ys.push(y-1);
            }
        }
    }
    if (y+2<8){
        if (x+1<8){
            if(tabla[x+1][y+2]==-1){
                tabla[x+1][y+2] = tabla[x][y]+1;
                xs.push(x+1);
                ys.push(y+2);
            }
        }
        if (x-1>=0){
            if(tabla[x-1][y+2]==-1){
                tabla[x-1][y+2] = tabla[x][y]+1;
                xs.push(x-1);
                ys.push(y+2);
            }
        }
    }
    if (y-2>=0){
        if (x+1<8){
            if(tabla[x+1][y-2]==-1){
                tabla[x+1][y-2] = tabla[x][y]+1;
                xs.push(x+1);
                ys.push(y-2);
            }
        }
        if (x-1>=0){
            if(tabla[x-1][y-2]==-1){
                tabla[x-1][y-2] = tabla[x][y]+1;
                xs.push(x-1);
                ys.push(y-2);
            }
        }
    }
    while(!xs.empty())
    {
        xn = xs.front();
        yn = ys.front();
        xs.pop();
        ys.pop();
        movimientos(xn, yn);
    }
}
int main()
{
    string a, b;
    int x, y;
    while (cin >> a)
    {
        cin >> b;
        x = (int)a[0]-97;
        y = (int)a[1]-49;
        ///cout << x << "   " << y << endl;
        memset (tabla, -1, sizeof tabla);
        tabla[x][y] = 0;
        movimientos(x, y);
        /*for (int i=0; i<8; i++){
            for (int j=0; j<8; j++){
                cout << tabla[i][j] << "   ";
            }
            cout << endl;
        }*/
        x = (int)b[0]-97;
        y = (int)b[1]-49;
        cout << "To get from " << a << " to " << b << " takes " << tabla[x][y] << " knight moves." << endl;
    }
    return 0;
}
