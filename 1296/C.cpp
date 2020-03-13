#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int x;
    int y;
    int i;
} State;

void printS(State a)
{
    cout << a.x << ' ' << a.y << ' ' << a.i << endl;
}

bool operator<(const State &a, const State &b)
{
    if (a.x < b.x)
        return true;
    else if (a.x == b.x && a.y < b.y)
        return true;
    else if (a.x == b.x && a.y == b.y && a.i < b.i)
        return true;
    else
        return false;
}

bool operator==(const State &a, const State &b)
{
    return a.x == b.x && a.y == b.y;
}

int translate(char x)
{
    if (x == 'L' || x == 'D')
        return -1;
    return 1;
}

int solve()
{
    int n;
    cin >> n;
    char arr[n];
    int ud[n], lr[n];
    State st[n + 1];
    memset(ud, 0, sizeof(ud));
    memset(lr, 0, sizeof(ud));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'L' || arr[i] == 'R')
            lr[i] += translate(arr[i]);
        else
            ud[i] += translate(arr[i]);

        if (i != 0)
        {
            ud[i] += ud[i - 1];
            lr[i] += lr[i - 1];
        }
    }
    State a;
    for (int i = 0; i < n; i++)
    {
        a.x = ud[i];
        a.y = lr[i];
        a.i = i + 1;
        st[i] = a;
    }
    a.x = 0;
    a.y = 0;
    a.i = 0;
    st[n] = a;
    sort(st, st + n + 1);
    /*for (int i = 0; i < n + 1; i++)
    {
        printS(st[i]);
    }*/
    int mins = 999999999, x, y;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == st[i + 1])
        {
            int p = st[i + 1].i - st[i].i + 1;
            if (mins > p)
            {
                mins = p;
                x = st[i].i;
                y = st[i + 1].i;
            }
        }
    }
    if (mins == 999999999)
        cout << -1 << endl;
    else
        cout << x + 1 << ' ' << y << endl;
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