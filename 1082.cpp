#include <bits/stdc++.h>

using namespace std;

vector <int> g[27];
vector <int> subg;
bool visitado[27];

char letra(int n)
{
    if (n==0) return 'a';
    else if (n==1) return 'b';
    else if (n==2) return 'c';
    else if (n==3) return 'd';
    else if (n==4) return 'e';
    else if (n==5) return 'f';
    else if (n==6) return 'g';
    else if (n==7) return 'h';
    else if (n==8) return 'i';
    else if (n==9) return 'j';
    else if (n==10) return 'k';
    else if (n==11) return 'l';
    else if (n==12) return 'm';
    else if (n==13) return 'n';
    else if (n==14) return 'o';
    else if (n==15) return 'p';
    else if (n==16) return 'q';
    else if (n==17) return 'r';
    else if (n==18) return 's';
    else if (n==19) return 't';
    else if (n==20) return 'u';
    else if (n==21) return 'v';
    else if (n==22) return 'w';
    else if (n==23) return 'x';
    else if (n==24) return 'y';
    else if (n==25) return 'z';
}
void dfs(int nodo)
{
    visitado[nodo] = true;
    sort(g[nodo].begin(), g[nodo].end());
    for (int i=0; i<g[nodo].size(); i++)
    {
        int v = g[nodo][i];
        if (!visitado[v])
        {
            ///cout << letra(v) << ",";
            subg.push_back(v);
            dfs(v);
        }
        /*else
        {
            cout << letra(v) << ",";
        }*/
    }
}
int main()
{
    int n;
    int v, e;
    int conec;
    char ac, bc;
    int a, b;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> v >> e;
        for (int j=0; j<e; j++)
        {
            cin >> ac >> bc;
            a = ac-97;
            b = bc-97;
            //cout << a << "  " << b << endl;
            g[a].push_back(b);
            g[b].push_back(a);
        }

        cout << "Case #" << i+1 << ":" << endl;
        conec = 0;
        memset(visitado, false, sizeof(visitado));
        for (int j=0; j<v; j++)
        {
            if(!visitado[j])
            {
                ///cout << letra(j) << ",";
                subg.clear();
                subg.push_back(j);
                dfs(j);
                conec++;
                sort(subg.begin(), subg.end());
                for (int k=0; k<subg.size(); k++)
                {
                    cout << letra(subg[k]) << ",";
                }
                cout << endl;
            }
        }
        cout << conec << " connected components" << endl << endl;
        for (int j=0; j<v; j++)
            g[j].clear();
    }
    return 0;
}
