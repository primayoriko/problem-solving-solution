#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool flg = true;
    for (i = 0; i < n; i++)
    {
        if (i > arr[i])
            break;
    }

    for (i = i; i < n; i++)
    {
        if ((n - i - 1) > arr[i])
        {
            flg = false;
            break;
        }
    }

    if (n % 2 == 0)
    {
        int t = n / 2;
        if (arr[t] == arr[t - 1] && arr[t] == t - 1)
            flg = false;
    }

    if (flg)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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