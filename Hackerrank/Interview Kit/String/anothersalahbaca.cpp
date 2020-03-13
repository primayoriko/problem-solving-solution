#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s)
{
    long pre[n][26], suf[n][26];
    memset(pre, 0, sizeof(pre));
    memset(suf, 0, sizeof(suf));

    for (int i = 0; i < n; i++)
    {
        pre[i][s[i] - 'a']++;
        if (i != 0)
        {
            for (int j = 0; j < 26; j++)
            {
                pre[i][j] += pre[i - 1][j];
            }
        }
    }
    for (int i = n - 1; i > -1; i--)
    {
        suf[i][s[i] - 'a']++;
        if (i != n - 1)
        {
            for (int j = 0; j < 26; j++)
            {
                suf[i][j] += suf[i + 1][j];
            }
        }
    }

    long sol[26][26];
    memset(sol, 0, sizeof(sol));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (pre[i][j] == suf[i][j])
            {
                sol[s[i] - 'a'][j] += max(sol[s[i] - 'a'][j], pre[i][j]);
            }
        }
    }
    long ans(0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (i != j)
                ans += sol[i][j];
        }
    }
    for (int i = 0; i < 26; i++)
        ans += suf[0][i];
    return ans;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
