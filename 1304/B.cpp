#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
string s[N];
bool used[N];
vector<int> lef;
vector<int> rig;

bool pal(int j, int m)
{
    for (int i = 0; i < m / 2; i++)
    {
        if (s[j][i] != s[j][m - i - 1])
            return false;
    }
    return true;
}

bool rev(int i, int j, int m)
{
    for (int k = 0; k < m; k++)
    {
        if (s[i][k] != s[j][m - k - 1])
            return false;
    }
    //cout << s[i] << ' ' << s[j] << endl;
    return true;
}

int solve()
{
    string sol = "";
    memset(used, 0, sizeof(used));
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && !used[i] && !used[j] && rev(i, j, m))
            {
                used[i] = 1;
                used[j] = 1;
                lef.push_back(i);
                rig.push_back(j);
            }
        }
    }
    int siz = lef.size();
    //cout << siz << endl;
    for (int i = 0; i < siz; i++)
    {
        sol += s[lef[i]];
    }
    for (int i = 0; i < n; i++)
    {
        if (!used[i] && pal(i, m))
        {
            sol += s[i];
            break;
        }
    }
    for (int i = 0; i < lef.size(); i++)
    {
        sol += s[rig[siz - i - 1]];
    }
    cout << sol.length() << endl
         << sol << endl;
    return 0;
}

int main()
{
    solve();
}