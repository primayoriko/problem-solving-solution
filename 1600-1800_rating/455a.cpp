// https://codeforces.com/contest/455/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long dp[100005], arr[100005], maks(0);
    memset(arr, 0, sizeof(arr));
    memset(dp, 0, sizeof(dp));
    for (long long i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        arr[a] += a;
        maks = max(a, maks);
    }
    dp[1] = arr[1];
    for (long long i = 2; i <= maks; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
    }
    cout << dp[maks] << endl;
}