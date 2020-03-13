#include <bits/stdc++.h>
using namespace std;

vector<int> arr[107][107];
int parent[107][107];

void make_set(int v, int t)
{
    parent[t][v] = v;
}

int find_set(int v, int t)
{
    if (v == parent[t][v])
        return v;
    return find_set(parent[t][v], t);
}

void union_sets(int a, int b, int t)
{
    a = find_set(a, t);
    b = find_set(b, t);
    if (a != b)
        parent[t][b] = a;
}

int solve(int t)
{
    int m, n;
    cin >> n >> m;
    int a[n], p[m], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
        p[i]--;
    }
    for (int i = 0; i < m; i++)
    {
        union_sets(p[i], p[i] + 1, t);
        //cout << "a" << endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << find_set(i, t) << ' ';
    //     //cout << "a" << endl;
    // }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        bool flg = false;
        //cout << "b" << endl;
        for (int j = 0; j < n && !flg; j++)
        {
            flg = (a[i] == b[j] && find_set(i, t) == find_set(j, t));
        }
        if (!flg)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}

int main()
{
    for (int i = 0; i < 107; i++)
    {
        for (int j = 0; j < 107; j++)
            parent[i][j] = j;
    }
    int t;
    cin >> t;
    while (t--)
        solve(t);
}