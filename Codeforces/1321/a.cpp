#include <bits/stdc++.h>
using namespace std;

int solve()
{
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n], arr2[n], par[n], sum(0), sum2(0), num(0), res[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        par[i] = arr[i] - arr2[i];
        if (par[i] == 1)
            num++;
    }
    int adds = max(0, (int)ceil((float)(sum2 - sum + 1) / (float)num));
    //cout << adds << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     res[i] = (par[i] == 1) ? 1 + adds : 1;
    // }
    if (num == 0)
        cout
            << -1 << endl;
    else
    {
        cout << 1 + adds << endl;
    }

    // while (n--)
    //     solve();
    return 0;
}