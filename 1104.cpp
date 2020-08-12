#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, num;
    int sem;
    vector<int> a, b;
    while (cin >> n >> m && !(n==0, m==0))
    {
        sem = 0;
        a.clear();
        b.clear();
        cin >> num;
        a.push_back(num);
        n--;
        while (n--){
            cin >> num;
            if (num!=a.back())
                a.push_back(num);
        }
        cin >> num;
        b.push_back(num);
        m--;
        while (m--){
            cin >> num;
            if (num!=b.back())
                b.push_back(num);
        }
        /*for (int i=0; i<a.size(); i++)
            cout << a[i] << "  ";
        cout << endl;
        for (int i=0; i<b.size(); i++)
            cout << b[i] << "  ";
        cout << endl;*/
        for (int i=0; i<a.size(); i++){
            if (count(b.begin(), b.end(), a[i])!=0)
                sem++;
        }
        cout << min(a.size(), b.size())-sem << endl;
    }
    return 0;
}
