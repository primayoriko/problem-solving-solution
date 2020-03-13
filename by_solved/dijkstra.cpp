#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
const int N = 2e5 + 7;

vector<pair<int, int>> edlist[N];
bool visited[N];
priority_queue<pair<int, int>> costs;

void dijkstra()
{
    while (!costs.empty())
    {
        pair<int, int> s = costs.top();
    }
}

int main()
{
    int n, e, t;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int b;
        cin >> b;
        pair<int, int> a;
        cin >> b >> a.first >> a.second >> a.first;
        edlist[b].push_back(a);
    }
    cin >> t;
    for (int i = 1; i <= n; i++)
    {
        pair<int, int> s;
        s.second = i;
        if (i != t)
            s.first = INF;
        else
            s.first = 0;
        costs.push(s);
    }

    dijkstra();
    return 0;
}