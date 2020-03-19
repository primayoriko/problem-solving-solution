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
        if (arr[i] == -1)
        {
            if (i == n - 1 && arr[i - 1] != -1)
            {
                sol.push_back(arr[i - 1]);
            }
            if (i == 0 && arr[i + 1] != -1)
            {
                sol.push_back(arr[i + 1]);
            }
            else
            {
                if (arr[i + 1] != -1)
                {
                    sol.push_back(arr[i + 1]);
                }
                if (arr[i - 1] != -1)
                {
                    sol.push_back(arr[i - 1]);
                }
            }
        }
    }
    sort(sol, sol + sol.size());
    int a, b, c, d;
    int n = sol.size() - 1;
    b = sol[n];
    c = sol[n / 2 + 1];
    if (b - sol[n] < c - sol[0])
        cout << b << ' ' << b - sol[n] << endl;

    else
        cout << c << ' ' << c - sol[0] << endl;
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