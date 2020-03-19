#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    int e(0), o(0);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            e++;
        else
            o++;
    }
    if (e != 0 && o != 0)
        cout << "YES" << endl;
    else if (n % 2 == 0 && e == 0)
        cout << "NO" << endl;
    else if (o == 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
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