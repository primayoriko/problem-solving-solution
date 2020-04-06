#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> lis;

const int MAX = 1e5+7;

bool vis[MAX];
int costs[MAX];

vector<int> adj[MAX];

void bfs(int cur, int cost){
    if(!vis[cur]){
        vis[cur] = true;
        costs[cur] = cost;
        for(int i =0;i<adj[cur].size();i++){
            pair<int, int> temp;
            temp.first = adj[cur][i];
            temp.second = cost + 1;
            lis.push(temp);
            //cout<<cur<<' '<<adj[cur][i]<<' '<<cost+1<<endl;
        }
        while(!lis.empty()){
            pair<int, int> temp = lis.front();
            lis.pop();
            bfs(temp.first, temp.second);
        }
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1, 0);
    for(int i=2;i<=n;i++){
        cout<<costs[i]<<endl;
    }
    return 0;
}
