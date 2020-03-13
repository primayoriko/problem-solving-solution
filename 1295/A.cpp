#include <bits/stdc++.h>

using namespace std;

const long int d = 998244353;

void solve()
{
    long int n;
    cin >> n;
    long int dig = n / 2 % d;
    string s = "";
    if (n > 3)
    {
        for (long int i = 0; i < dig; i++)
        {
            s += "1";
        }
        if (n % 2 == 1)
            s[0] = '7';
    }
    else if (n == 3)
        s = "7";
    else
        s = "1";
    cout << s << '\n';
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