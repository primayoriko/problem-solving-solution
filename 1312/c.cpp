#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i <= 54; i++)
    {
        bool u = false;
        //cout << (long long)pow(m, i) << endl;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % m == 1 && u)
            {
                cout << "NO" << endl;
                return;
            }
            if (arr[j] % m != 1 && arr[j] % m != 0)
            {
                cout << "NO" << endl;
                return;
            }
            if (!u)
                u = arr[j] % m == 1;
            //cout << arr[j] % m << ' ';
            arr[j] /= m;
        }
        //cout << endl;
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}