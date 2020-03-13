#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, init;
    cin >> n >> init;
    pair<int, pair<int, int>> cus[n];
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cus[i].first = a;
        cus[i].second.first = b;
        cus[i].second.second = c;
    }
    sort(cus, cus + n);
    int lef(cus[i].second.first), rig((cus[i].second.second), diff(0), tim(cus[i].first)), spar(0);
    for (int i = 1; i < n; i++)
    {
        dif = cus[i].first - tim;
        tim = cus[i].first;
    }
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