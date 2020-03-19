#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    int arr[n][26], res[26];
    memset(arr, 0, sizeof(arr));
    memset(res, 0, sizeof(res));
    for (int i = 0; i < n; i++)
    {
        arr[i][s[i] - 'a']++;
        for (int j = 0; j < 26; j++)
        {
            if (i != 0)
                arr[i][j] += arr[i - 1][j];
        }
    }
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        for (int j = 0; j < 26; j++)
        {
            res[j] += arr[a - 1][j];
        }
    }
    for (int j = 0; j < 26; j++)
    {
        res[j] += arr[n - 1][j];
    }
    for (int j = 0; j < 26; j++)
        cout << res[j] << ' ';
    cout << endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}