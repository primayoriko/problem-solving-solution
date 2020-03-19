// https://codeforces.com/problemset/problem/466/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n], pref[n], ans(0);
    memset(arr, 0, sizeof(arr));
    memset(pref, 0, sizeof(pref));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        //arr[i] += (long long)1e9;
        if (i == 0)
            pref[i] = arr[i];
        else
        {
            pref[i] = pref[i - 1] + arr[i];
        }
    }
    if (pref[n - 1] % 3 != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        long long parts = pref[n - 1] / 3;
        int p1[n];
        //, p2[n];
        memset(p1, 0, sizeof(p1));
        //memset(p2, 0, sizeof(p2));
        for (int i = 0; i < n - 1; i++)
        {
            if (pref[i] == parts)
                p1[i]++;
            if (i != 0)
            {
                p1[i] += p1[i - 1];
                //p2[i] = p2[i - 1];
                if (pref[i] == 2 * parts)
                    ans += p1[i - 1];
            }
        }
        cout << ans << endl;
    }
}