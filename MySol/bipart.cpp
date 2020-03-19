#include <bits/stdc++.h>
using namespace std;

const int N=1e5+7;

vector <int> adj[N];
bool vis[N];
int gr[N], num[2];
long long int ans;

void dfs(int i, int j){
    vis[i]=1;
    for(int k=0;k<adj[i].size();k++){
        if(!vis[adj[i][k]]){
            gr[adj[i][k]]=(j+1)%2;
            num[(j+1)%2]++;
            dfs(adj[i][k],gr[adj[i][k]]);
        }
    }
}


int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j,k,m,a,b;
    memset(vis,0, sizeof(vis));
    memset(gr,-1, sizeof(gr));
    gr[0]=1;
    num[1]++;
    cin>>n;
    for(i=0;i<n-1;i++){
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    dfs(0,gr[0]);
    //memset(vis,0, sizeof(vis));
    for(i=0;i<n;i++){
        if(gr[i]==0){
            ans=ans+num[1]-adj[i].size();
            //cout<<ans<<endl;
        }
    }
    //for(i=0;i<n;i++){
        //cout<<gr[i]<<endl;

    //cout<<num[0]<<endl;
    //cout<<num[1]<<endl;

    cout<<ans<<endl;
}
