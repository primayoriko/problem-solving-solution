#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj_list;
vector<pair<int, int>> val_sort;
vector<int> val;
vector<bool> vis;

int main(){
    int v, e;
    cin>>v>>e;
    long long sum(0);
    adj_list.resize(v);
    val_sort.resize(v);
    val.resize(v);
    vis.resize(v);
    for(int i=0;i<v;i++){
        cin>>val[i];
        val_sort[i].second=i;
        val_sort[i].first= val[i];
        vis[i] = false;
    }
    for(int i=0;i<e;i++){
        int a, b;
        cin>>a>>b;
        adj_list[a].push_back(b);
    }
    sort(adj_list.begin(), adj_list.end());
    for(int i=0;i<v;i++){
        int j = val_sort[i].second;
        for(int k =0; k < adj_list[j].size();k++){
            if(!vis[adj_list[j][k]])
                sum += val[adj_list[j][k]];
        }
        vis[j] = true;
    }
    cout<<sum<<endl;
    return 0;
}