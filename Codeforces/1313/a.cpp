#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int a[3], ans(0);
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3, greater<int>());
    // int maks(max(a, max(b, c))), mins(mis(a, min(b, c))), ans(0);
    // int comb = min();
    for (int i = 1; i <= 3; i++)
    {
        int y = (i == 3) ? 1 : 3;
        for (int j = 0; j < y; j++)
        {
            //cout << "a" << endl;
            int cnt = 0;
            for (int k = 0; k < i; k++)
            {
                if (a[(j + k) % 3] != 0)
                    cnt++;
            }
            if (cnt == i)
            {
                ans++;
                for (int k = 0; k < i; k++)
                {
                    a[(j + k) % 3]--;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}