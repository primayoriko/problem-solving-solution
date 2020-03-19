#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int arr[n + 6], cnt[n + 6], res(0);
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n + 6; i++)
        arr[i] = -999;
    vector<pair<int, int>> arr2;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = s[i - 1] - 'a';
        pair<int, int> t;
        t.first = arr[i];
        t.second = i;
        arr2.push_back(t);
    }
    sort(arr2.begin(), arr2.end());
    reverse(arr2.begin(), arr2.end());
    for (int i = 0; i < n; i++)
    {
        if (cnt[arr2[i].second] == 0)
        {
            int l(arr2[i].second), r(arr2[i].second);
            for (; r <= n; r++)
            {
                if (arr[l] != arr[r])
                {
                    break;
                }
            }
            if (arr[l - 1] == arr[l] - 1 || arr[r + 1] == arr[r] - 1)
            {
                res += (r - l);
                for (int j = l; j < r; j++)
                {
                    cnt[j]++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt[arr2[i].second] == 0)
        {
            int cntl(arr2[i].second - 1), cntl2(arr2[i].second + 1);
            for (int j = arr2[i].second - 1; j >= 0; j--)
            {
                if (cnt[j] == 0)
                {
                    cntl = j;
                    break;
                }
            }
            for (int j = arr2[i].second + 1; j <= n; j++)
            {
                if (cnt[j] == 0)
                {
                    cntl2 = j;
                    break;
                }
            }
            if (arr[arr2[i].second] - 1 == arr[cntl] || arr[arr2[i].second] - 1 == arr[cntl2])
            {
                res++;
                cnt[arr2[i].second]++;
            }
        }
    }
    cout << res << endl;
    return 0;
}