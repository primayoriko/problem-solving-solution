#include <bits/stdc++.h>
using namespace std;

int solve()
{
    long int n, sum(0);
    cin >> n;
    while (n != 0)
    {
        long int a = n % 10;
        //long int b = (n / 10);
        sum += (n - a);
        n = ((n - a) / 10);
        n += (a);

        if (n < 10)
        {
            sum += n;
            break;
        }
    }
    cout << sum << endl;
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