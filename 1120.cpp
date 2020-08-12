#include <bits/stdc++.h>

using namespace std;

int main()
{
    char n;
    string num;
    while (cin >> n >> num && !(n=='0', num=="0"))
    {
        for (int i=0; i<num.length(); i++){
            if (num[i]==n){
                num.erase(num.begin()+i);
                i--;
            }
        }
        ///cout << num << "  ";
        if (!num.empty()){
            for (int i=0; i<num.length(); i++){
                if (num[i]=='0'){
                    num.erase(num.begin()+i);
                    i--;
                }
                else{
                    break;
                }
            }
            if (num.empty())
                cout << 0 << endl;
            else
                cout << num << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}
