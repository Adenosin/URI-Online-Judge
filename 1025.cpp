#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    int num, con;
    int mid, l, r;
    bool hay;
    vector <int> nums;

    for (int i=0; i<65; i++)
    {
        cin >> n >> q;
        if (n==0 && q==0) return 0;
        nums.clear();

        for (int j=0; j<n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        sort(nums.begin(), nums.end());
        cout << "CASE# " << i+1 << ":" << endl;
        for (int j=0; j<q; j++)
        {
            cin >> num;
            hay = false;
            for (int k=0; k<nums.size(); k++)
            {
                if (num==nums[k])
                {
                    cout << num << " found at " << k+1 << endl;
                    k = nums.size();
                    hay = true;
                }
            }
            if(!hay) cout << num << " not found" << endl;
        }
    }
    return 0;
}
