// https://codeforces.com/contest/466/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c, d;
    cin >> n >> c >> d;
    bool x = c < d;
    n *= 6;
    if (c > d)
        swap(c, d);
    if (n > c * d)
        d = n / c + ((n % c != 0) ? 1 : 0);
    cout << c * d << endl;
    if (x)
        cout << c << ' ' << d << endl;
    else
    {
        cout << d << ' ' << c << endl;
    }
}