#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, d;
    cin >> n >> d;
    int maks(0), arr[n];
    bool r = false;
    for (int i = 0; i < n && !r; i++)
    {
        cin >> arr[i];
        r = (arr[i] == d);
        maks = max(arr[i], maks);
    }
    if (!r && d < maks)
        cout << 2 << endl;
    else
        cout << d / maks + ((d % maks == 0) ? 0 : 1) << endl;
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