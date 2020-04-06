#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5+7;

int parent[MAX], size[MAX];

void make_set(int n){
    parent[n] = n;
    size[n] = 1;
}

int find_set(int n){
    if(parent[n] ==n)
        return n;
    return parent[n] = find_set(parent[n]);
}

void join_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        if(size[a]<size[b])
            swap(a, b);
        parent[b] = a;
        size[a]+=size[b];
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        make_set(i);
    }
    for(int i=0;i<m;i++){
        int a, b;
        cin>>a>>b;
        join_set(a,b);
    }
    // for(int i=1;i<=n;i++)
    //     cout<<parent[i]<<' ';
    // cout<<endl;
    sort(parent+1, parent+n+1);
    m=n;
    for(int i=2;i<=n;i++){
        if(parent[i]==parent[i-1])
            m--;
    }
    cout<<m<<endl;
    return 0;
}