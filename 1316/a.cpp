#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n], req, sum(0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i)
            sum += arr[i];
        else
            req = m - arr[i];
    }
    cout << min(arr[0] + min(sum, req), m) << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
        solve();
}