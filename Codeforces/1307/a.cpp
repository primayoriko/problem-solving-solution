#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, d;
    cin >> n >> d;
    int arr[n], maks(0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 1; i++)
    {
        int nb(0), dn(d);
        for (int j = 1; j < n; j++)
        {
            if (i - j > 0)
            {
                int num = min(dn / j, arr[i - j]);
                dn -= num * j;
                nb += num;
            }
            if (i + j < n)
            {
                int num = min(dn / j, arr[i + j]);
                dn -= num * j;
                nb += num;
            }
        }
        maks = max(nb + arr[i], maks);
    }
    cout << maks << endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}