#include <bits/stdc++.h>
using namespace std;

const int N = 7e5;
const long int INF = 7e9;

vector<long int> sol;
long int ans(0);
int cnt = 1;

typedef struct
{
    long int p1;
    long int p2;
    long int f;
} Edge;

vector<Edge> graf;
bool vac[N];

int main()
{
    memset(vac, 0, sizeof(vac));
    int x, y;
    cin >> x >> y;
    long int tree[x];
    for (int main i = 0; i < x; i++)
    {
        cin >> tree[i];
    }
    sort(tree, tree + n);

    Edge temp;
    temp.p1 = -1 * INF;
    temp.p2 = tree[0];
    temp.f = temp.p2 - temp.p1;
    graf.push_back(temp);
    for (int i = 0; i < n - 1; i++)
    {
        temp.p1 = tree[i];
        temp.p2 = tree[i + 1];
        temp.f = temp.p2 - temp.p1;
        graf.push_back(temp);
    }
    temp.p1 = tree[n - 1];
    temp.p2 = INF;
    temp.f = temp.p2 - temp.p1;
    graf.push_back(temp);
    int k = 0;
    while (k < y)
    {
        int i = 0;
        while (i < graf.size() && k < y)
        {
            if (!vac[i])
            {
            }
        }
    }
}