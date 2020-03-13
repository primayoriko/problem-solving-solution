#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, m;
    cin >> n >> m;
    string arr[n + 5];
    int arrnum[n + 5][m + 5];
    // fill all with .
    for (int i = 0; i < n + 5; i++)
    {
        for (int j = 0; j < m + 5; j++)
        {
            arr[i][j] = '.';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int maxval[n + 5][m + 5];
    memset(maxval, 1, sizeof(maxval));
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == n)
            {
                maxval[i][j] = arr[i][j];
            }
            else
            {
                if (arr[i][j] == '.') //arr[i][j]
                {
                    maxval[i][j] = arrnum[i + i][j];
                }
                else
                {
                    maxval[i][j] = max(arrnum[i + 1][j + 1], arrnum[i + 1][j - 1]);
                }
            }
        }
    }
    return 0;
}

int main()
{
    solve();
}