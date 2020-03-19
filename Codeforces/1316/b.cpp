#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, m;
    string s;
    cin >> n >> s;
    int arr[n], first[26];
    memset(first, -1, sizeof(first));
    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i] - 'a';
        if (first[arr[i]] == -1)
            first[arr[i]] = i;
        else
            first[arr[i]] = min(first[arr[i]], i);
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
        solve();
}