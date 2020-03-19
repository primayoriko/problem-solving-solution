#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int b[n + 1], dp[n + 1], sum(0);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        b[i] = s[i - 1] == '(' ? 1 : -1;
        //sum += b[i];
        b[i] = dp[i - 1] + b[i];
    }

    return 0;
}