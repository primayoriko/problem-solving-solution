#include <bits/stdc++.h> 
using namespace std; 

const int MAX = 1e5;

vector<int> adj[MAX];
bool vis[MAX];
bool correct[MAX];
int cnt[MAX];


bool dfs(int fir, int sec){
    if(correct[fir]) return true;
    
    if(fir == sec){
        vis[fir] = true;
        correct[fir] = true;
        return true;
    } 

    if(vis[fir]) return false;

    vis[fir] = true;
    for(auto node : adj[fir]){
        if(dfs(node, sec)){
            cnt[fir]++;
        }
    }

    correct[fir] = cnt[fir] > 0;
    return correct[fir];
}

int main(){
    int n, m, q;

    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin>>a>>b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cout<<"saddasd"<<endl;
    cin>>q;
    while(q--){
        int fir, sec;
        cin>>fir>>sec;
        memset(vis, 0, sizeof(vis));
        memset(correct, 0, sizeof(correct));
        for(int i = 0; i < n; i++){
            cnt[i] = 0;
        }
        dfs(fir, sec);

        int total = 0;
        for(int i = 0; i < n; i++){
            if(i == fir || i < sec || cnt[i] == 1){
                total++;
                cout<<"--"<<i+1<<endl;
            } 
        }
        cout<<">>"<<total<<endl;
    }
}