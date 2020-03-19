#include <bits/stdc++.h>
using namespace std;

map <int, int> lists;
set <int> is;

void dfs(int v, int y){
    lists[v]=y;
    if(v mod 3 == 0 and is.count(v mod 3)==1){

        dfs
    }

}

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,j,k,m;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
        q.insert(arr[i]);
        visited.insert(pair<int, int> (arr[i],-9999));
    }
    dfs(arr[0],arr[0]);
    for(i=0;i<n;i++){
        if(visited[arr[i]!=-9999]){
            dfs(arr[i]);
        }

    }

}
