#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> sol;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0 && arr[i] != -1 && arr[i + 1] == -1)
            sol.push_back(arr[i]);
        if (arr[i] == -1 && arr[i + 1] != -1)
            sol.push_back(arr[i + 1]);
    }
    int m = sol.size() - 1;
    if (m == -1)
    {
        cout << 0 << ' ' << 0 << endl;
    }
    else
    {
        // cout << m << ' ' << sol[0] << ' ' << sol[1] << endl;
        sort(sol.begin(), sol.end());
        int a, d;
        a = (sol[m] + sol[0]) / 2;
        d = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == -1)
            {
                if (arr[i + 1] == -1)
                {
                    continue;
                }
                else
                {
                    d = max(d, abs(a - arr[i + 1]));
                }
            }
            else
            {
                if (arr[i + 1] == -1)
                {
                    d = max(d, abs(a - arr[i]));
                }
                else
                {
                    d = max(d, abs(arr[i] - arr[i + 1]));
                }
            }
        }
        cout << d << ' ' << a << endl;
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