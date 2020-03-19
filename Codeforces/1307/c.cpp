#include <bits/stdc++.h>
using namespace std;

long long comb2(long long n)
{
    return n * (n - 1) / 2;
}

int main()
{
    string s;
    cin >> s;
    if (s.length() < 2)
    {
        cout << 1 << endl;
        return 0;
    }
    long long arrs[s.length()][26];
    long long sol[26][26];
    memset(arrs, 0, sizeof(arrs));
    memset(sol, 0, sizeof(sol));
    for (long long i = 0; i < s.length(); i++)
    {
        arrs[i][s[i] - 'a']++;
        for (long long j = 0; j < 26; j++)
        {
            if (i != 0)
                arrs[i][j] += arrs[i - 1][j];
        }
    }
    for (long long i = 1; i < s.length(); i++)
    {
        for (long long j = 0; j < 26; j++)
        {
            sol[s[i] - 'a'][j] += arrs[i - 1][j];
        }
    }
    long long maks = 0;
    for (long long i = 0; i < 26; i++)
    {
        for (long long j = 0; j < 26; j++)
        {
            maks = max(maks, sol[i][j]);
        }
    }
    for (long long i = 0; i < 26; i++)
    {
        maks = max(maks, comb2(arrs[s.length() - 1][i]));
        maks = max(maks, arrs[s.length() - 1][i]);
    }
    cout << maks << endl;
}