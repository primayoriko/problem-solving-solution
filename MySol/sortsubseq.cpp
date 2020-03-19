#include <bits/stdc++.h>
using namespace std;

#define pii pair <int, int>
#define f first
#define s second
#define pb push_back

const int N=1e5+7;
vector< vector <int> > ans;
pii arr[N];
bool vis[N];
vector <int> q;

void dfs(int i){
    q.pb(i);
    vis[i]=1;
    if(!vis[arr[i].s]){
        dfs(arr[i].s);
    }
    else{
        ans.pb(q);
        q.clear();
    }
}

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(vis,0, sizeof(vis));
    int n,i,j,k,m,a,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        arr[i].f = a;
        arr[i].s = i;
    }
    sort(arr, arr+n);
    for(i=0;i<n;i++){
        if(i == arr[i].s){
            q.pb(i);
            ans.pb(q);
            q.clear();
            vis[i]=1;
        }
        else if (!vis[i]){
            dfs(i);
        }
    }
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++){
        cout<<ans[i].size()<<' ';
        for(j=0;j<ans[i].size();j++){
            cout<<ans[i][j]+1<<' ';
        }
        cout<<'\n';
    }
}
