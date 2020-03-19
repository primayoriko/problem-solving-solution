#include <bits/stdc++.h>
using namespace std;

bool an[n + 1], am[m + 1];
int dpn[n + 1], dpm[m + 1];
long long sum(0);

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    memset(dpn, 0, sizeof(dpn));
    memset(dpm, 0, sizeof(dpm));
    for (int i = 1; i <= n; i++)
        cin >> an[i];
    for (int i = 1; i <= m; i++)
        cin >> am[i];
    for (int i = 1; i <= n; i++)
    {
        dpn[i] = (an[i]) ? ((an[i - 1]) ? 1 + dpn[i - 1] : 1) : 0;
    }
    for (int i = 1; i <= m; i++)
    {
        dpm[i] = (am[i]) ? ((am[i - 1]) ? 1 + dpm[i - 1] : 1) : 0;
    }
}