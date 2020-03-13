#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maks(0), occu(111111111);
    string winner;
    map<string, int> m, s, q;
    for (int i = 1; i <= n; i++)
    {
        string a;
        int t;
        cin >> a >> t;
        m[a] += t;
        if (m[a] > q[a])
        {
            s[a] = i;
            q[a] = m[a];
        }
    }
    for (auto a = m.begin(); a != m.end(); ++a)
    {
        if ((a->second > maks) || (a->second == maks && s[a->first] < occu))
        {
            maks = a->second;
            winner = a->first;
            occu = s[a->first];
        }
        //cout << a->first << " : " << a->second << ", " << s[a->first] << endl;
    }

    cout << winner << endl;
    return 0;
}