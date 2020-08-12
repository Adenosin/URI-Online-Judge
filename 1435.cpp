#include <iostream>
#include <math.h>

using namespace std;

int print(int p)
{
    if (p/10<1)
        cout << "  " << p;
    else
        cout << " "  << p;
}
int main()
{
    int n, p;
    int mid;
    int space;
    int k=0;
    n = 1;

    while (n!=0)
    {
        cin >> n;

        if (k!=0)
        {
            cout << endl;
        }

        if (n%2==0)
        {
            mid = n/2;
            for (int i=1; i<=mid; i++)
            {
                p = 1;
                for (int j=1; j<=n; j++)
                {
                    if (j<i)
                    {
                        if (j!=1) cout << " ";
                        print(p);
                        //cout << p << " ";
                        p++;
                    }
                    else
                    {
                        if (j>n-i)
                        {
                            if (j!=1) cout << " ";
                            print(p);
                            //cout << p << " ";
                            p--;
                        }
                        else
                        {
                            if (j!=1) cout << " ";
                            print(p);
                            //cout << p << " ";
                        }
                    }
                }
                cout << endl;
            }

            for (int i=mid; i>0; i--)
            {
                p = 1;
                for (int j=1; j<=n; j++)
                {
                    if (j<i)
                    {
                        if (j!=1) cout << " ";
                        print(p);
                        //cout << p << " ";
                        p++;
                    }
                    else
                    {
                        if (j>n-i)
                        {
                            if (j!=1) cout << " ";
                            print(p);
                            //cout << p << " ";
                            p--;
                        }
                        else
                        {
                            if (j!=1) cout << " ";
                            print(p);
                            //cout << p << " ";
                        }
                    }
                }
                cout << endl;
            }
            ///cout << endl;
            k++;
        }
        else
        {
            mid = (n-1)/2;
            for (int i=1; i<=mid; i++)
            {
                p = 1;
                for (int j=1; j<=n; j++)
                {
                    if (j<i)
                    {
                        if (j!=1) cout << " ";
                        print(p);
                        //cout << p << " ";
                        p++;
                    }
                    else
                    {
                        if (j>n-i)
                        {
                            if (j!=1) cout << " ";
                            print(p);
                            //cout << p << " ";
                            p--;
                        }
                        else
                        {
                            if (j!=1) cout << " ";
                            print(p);
                            //cout << p << " ";
                        }
                    }
                }
                cout << endl;
            }

            p = 1;
            for (int j=1; j<=n; j++)
            {
                if (j<mid+1)
                {
                    if (j!=1) cout << " ";
                    print(p);
                    //cout << p << " ";
                    p++;
                }
                else
                {
                    if (j>n-mid)
                    {
                        if (j!=1) cout << " ";
                        p--;
                        print(p);
                        //cout << p << " ";
                    }
                    else
                    {
                        if (j!=1) cout << " ";
                        print(p);
                        //cout << p << " ";
                    }
                }
            }
            cout << endl;

            for (int i=mid; i>0; i--)
            {
                p = 1;
                for (int j=1; j<=n; j++)
                {
                    if (j<i)
                    {
                        if (j!=1) cout << " ";
                        print(p);
                        //cout << p << " ";
                        p++;
                    }
                    else
                    {
                        if (j>n-i)
                        {
                            if (j!=1) cout << " ";
                            print(p);
                            //cout << p << " ";
                            p--;
                        }
                        else
                        {
                            if (j!=1) cout << " ";
                            print(p);
                            //cout << p << " ";
                        }
                    }
                }
                cout << endl;
            }
            ///cout << endl;
            k++;
        }
    }
    ///cout << endl;
    return 0;
}
