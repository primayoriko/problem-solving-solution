#include <bits/stdc++.h>
using namespace std;

int solve()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    int l = a.length();
    bool bl = true;
    for (int i = 0; i < n && bl; i++)
    {
        bl = a[i] == b[i] || b[i] == c[i] || c[i] == a[i];
    }
    if (bl)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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