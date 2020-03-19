#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    long long dp[n];
    dp[0] = (s[0] == '1') ? -1 : 1;
    for (long long i = 1; i < n; i++)
    {
        dp[i] = dp[i - 1] + ((s[i] == '1') ? -1 : 1);
    }
    /*for (long long i = 0; i < n; i++)
    {
        cout << dp[i] << ' ';
    }
    cout << '\n';
    for (long long i = 0; i < n; i++)
    {
        cout << x - dp[i] << ' ' << (x - dp[i]) % dp[n - 1] << '\n';
    }*/
    long long sol(0);
    for (long long i = 0; i < n; i++)
    {
        bool u = (x - dp[i]) * dp[n - 1] > 0;
        if (x == dp[i])
        {
            if (dp[n - 1] == 0)
            {
                cout << -1 << endl;
                return;
            }
            sol++;
        }
        else if (u)
        {
            //cout << u << endl;
            //cout << i << endl;
            if (dp[n - 1] != 0 && (x - dp[i]) % dp[n - 1] == 0)
                sol++;
        }
    }
    if (x == 0)
        sol++;
    printf("%li\n", sol);
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