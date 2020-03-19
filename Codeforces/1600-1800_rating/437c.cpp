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
        adj_list[a-1].push_back(b-1);
        adj_list[b-1].push_back(a-1);
    }
    sort(val_sort.begin(), val_sort.end());
    for(int i=v-1;i>-1;i--){
        
        int j = val_sort[i].second;
        for(int k =0; k < adj_list[j].size();k++){
            if(!vis[adj_list[j][k]]){
                sum += val[adj_list[j][k]];
                //cout<<val_sort[i].second<<' '<<adj_list[j][k]<<'\n';
            }
                
        }
        vis[j] = true;
    }
    //cout<<endl;
    cout<<sum<<endl;
    return 0;
}