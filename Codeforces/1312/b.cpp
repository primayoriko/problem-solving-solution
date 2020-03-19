#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2 + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[n - i - 1] << ' ';
    }
    cout << endl;
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