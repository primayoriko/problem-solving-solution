#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sm(0), ev(0);

    for (int i = 0; i < n; i++)
    {
        sm += s[i] - '0';
        if ((s[i] - '0') % 2 == 0)
            ev++;
    }
    if (ev == n)
    {
        cout << -1 << endl;
        return 0;
    }
    int i = n - 1;
    int ng(0);
    while (i > -1 && s[i] % 2 != 1)
    {
        ng += s[i] - '0';
        i--;
    }
    int k = i;
    i--;
    sm -= ng;
    while (sm % 2 != 0 && i > -1)
    {
        sm -= s[i] - '0';
        s[i] = '-';
        i--;
    }
    if (i == -1)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i <= k; i++)
    {
        if (s[i] != '-')
            cout << s[i];
    }
    cout << endl;
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