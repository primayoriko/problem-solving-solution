#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mid, n, m;
    cin >> n >> m;
    int arr[n + 2], arr2[n + 2];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r(m - 1);
    while (l < r)
    {
        mid = (l + r) / 2;
        copy_n(arr, n, arr2);
        // for (int i = 0; i < n; i++)
        //     cout << arr2[i] << ' ';
        // cout << endl;
        arr2[n] = m + 1;
        bool inc = true;
        for (int i = n - 1; i >= 0 && inc; i--)
        {
            if (arr2[i] > arr2[i + 1])
                arr2[i] = (mid + arr2[i]) % m;
            else
                arr2[i] = min((mid + arr2[i]), arr2[i + 1]);
            inc = arr2[i + 1] >= arr2[i];
        }
        if (inc)
            r = mid;
        else
            l = mid + 1;
        cout << inc << ' ' << mid << ' ' << l << ' ' << r << endl;
        for (int i = 0; i < n; i++)
            cout << arr2[i] << ' ';
        cout << endl;
        cout << inc << ' ' << mid << ' ' << l << ' ' << r << endl;
        for (int i = 0; i < n; i++)
            cout << arr2[i] << ' ';
        cout << endl;
    }
    cout << r << endl;
    return 0;
}