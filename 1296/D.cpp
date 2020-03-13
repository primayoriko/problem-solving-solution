#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int deter(int h, int a, int b)
{
    int y = h % (a + b);
    if (y <= a && y != 0)
        return 0;
    h -= a;
    h = h % (a + b);
    int x = (h % a == 0) ? 0 : 1;
    return h / a + x;
}

int solve()
{
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    int arr[n], kt[n], score(0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        kt[i] = deter(arr[i], a, b);
    }
    /*for (int i = 0; i < n; i++)
    {
        cout << kt[i] << ' ';
    }*/
    //cout << endl;
    sort(kt, kt + n);
    for (int i = 0; i < n; i++)
    {
        if (kt[i] <= k)
        {
            score++;
            k -= kt[i];
        }
        else
            break;
    }
    cout << score << endl;
    return 0;
}

int main()
{
    solve();
}