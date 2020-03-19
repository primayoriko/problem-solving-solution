#include <bits/stdc++.h>

using namespace std;

int binser()
{
}

void solve()
{

    string s, t;
    cin >> s >> t;
    int arrs[s.length()][26], arrt[t.length()][26], sol[t.length()];
    memset(sol, 0, t.length);
    memset(arrs, 0, sizeof(arrs));
    memset(arrt, 0, sizeof(arrt));
    for (int i = 0; i < s.length(); i++)
    {
        arrs[i][s[i] - 'a']++;
        for (int j = 0; j < 26; j++)
        {
            if (i != 0)
                arrs[i][j] += arrs[i - 1][j];
        }
    }
    for (int i = 0; i < t.length(); i++)
    {
        arrt[i][t[i] - 'a']++;
        for (int j = 0; j < 26; j++)
        {
            if (i != 0)
                arrt[i][j] += arrt[i - 1][j];
        }
    }
    for (int i = 0; i < t.length; i++)
    {
        for ()
        {
        }
    }
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