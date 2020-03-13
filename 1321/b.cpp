#include <bits/stdc++.h>
using namespace std;

int solve()
{
    return 0;
}

int main()
{
    int n;
    cin >> n;
    // while (n--)
    //     solve();
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i] - 'a';
        pair<int, int> t;
        t.first = arr[i];
        t.second = i;
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    long long sum(0), cnt(-999999999), res(0);
    for (int i = 0; i < n; i++)
    {
        if (cnt == -999999999)
        {
            cnt = arr[i].first;
            sum = arr[i].second + cnt;
        }
        else
        {
            if (arr[i].first == cnt)
                sum += arr[i].second + cnt;
            else
            {
                res = max(res, sum);
                cnt = arr[i].first;
                sum = arr[i].second + cnt;
            }
        }
    }
    res = max(res, sum);
    cout << res << endl;
}