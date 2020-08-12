#include <bits/stdc++.h>

using namespace std;

int cont;
vector<int> g[20];
bool visitado[20];

void dfs(int nodo)
{
    visitado[nodo] = true;
    sort(g[nodo].begin(), g[nodo].end());
    for (int i=0; i<g[nodo].size(); i++)
    {
        int spa=cont;
        int v = g[nodo][i];
        while(spa>0)
        {
            cout << "  ";
            spa--;
        }
        if (!visitado[v])
        {
            cout << nodo << "-" << v << " pathR(G," << v << ")" << endl;
            cont++;
            dfs(v);
            cont--;
        }
        else
        {
            cout << nodo << "-" << v << endl;
        }
    }
}
int main()
{
    int n;
    int v, e;
    int a, b;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> v >> e;
        for (int j=0; j<e; j++)
        {
            cin >> a >> b;
            g[a].push_back(b);
        }

        cout << "Caso " << i+1 << ":" << endl;
        memset(visitado, false, sizeof(visitado));
        for (int j=0; j<v; j++)
        {
            cont = 1;
            if (!visitado[j])
            {
                dfs(j);
                if (g[j].size()!=0) cout << endl;
            }
        }

        for (int j=0; j<v; j++)
            g[j].clear();
    }
    return 0;
}
