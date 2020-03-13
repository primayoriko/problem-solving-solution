#include <bits/stdc++.h>
using namespace std;

int solve()
{
    vector<pair<int, pair<int, int>>> v;
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mn = 1e9 + 7;
    for (int i = 0; i < m; i++)
    {
        pair<int, pair<int, int>> a;
        a.first = arr[i];
        a.second.first = i;
        a.second.second = 0;
        v.push_back(a);
        a.first = arr[n - i - 1];
        a.second.first = i;
        a.second.second = 1;
        v.push_back(a);
    }
    sort()
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