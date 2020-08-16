#include <bits/stdc++.h>
using namespace std;


const int MAX = 1e3+5;
long tree[4*MAX], treeMax[4*MAX];

void build(int a[], int v, int tl, int tr){
    if(tl==tr){
        tree[v] = a[tl];
        treeMax[v] = a[tl];
    }
    else{
        int tm = (tl+tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        tree[v] = tree[v*2] + tree[v*2+1];
        treeMax[v] = max(treeMax[v*2], treeMax[v*2+1]);
    }
}

long sum(int v, int tl, int tr, int l, int r){
    if(l>tr || r<tl){
        return 0;
    }
    else if(l<=tl && r>=tr){
        return tree[v];
    }
    else{
        int tm = (tl + tr)/2;
        return sum(v*2, tl, tm, l, r)+ sum(v*2+1, tm+1, tr, l, r);
    }
}

long maks(int v, int tl, int tr, int l, int r){
    if(l>tr || r<tl){
        return 0;
    }
    else if(l<=tl && r>=tr){
        return treeMax[v];
    }
    else{
        int tm = (tl + tr)/2;
        return max(maks(v*2, tl, tm, l, r), maks(v*2+1, tm+1, tr, l, r));
    }
}


void update(int v, int tl, int tr, int pos, int nVal){
    if(tl==tr){
        treeMax[v] = nVal;
        tree[v] = nVal;
        //cout<<"--- "<<v<<endl;
    }
    else{
        int tm = (tr+tl)/2;
        if(pos<=tm)
            update(v*2, tl, tm, pos, nVal);
        else
            update(v*2+1, tm+1, tr, pos, nVal);
        tree[v] = tree[v*2] + tree[v*2+1];
        treeMax[v] = max(treeMax[v*2], treeMax[v*2+1]);  
    }
}

int main(){
    int n, q;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    build(arr, 1, 1, n);
    // for(int i=1;i<=4*n;i++){
    //     cout<<i<<' '<<treeMax[i]<<endl;
    // }
    cin>>q;
    for(int i=0;i<q;i++){
        int a, l, r;
        cin>>a;
        if(a==1){
            cin>>l;
            update(1, 1, n, l, arr[l]+1);
            // for(int j=1;j<=4*n;j++){
            //     cout<<j<<' '<<tree[j]<<endl;
            // }
        }
        else{
            cin>>l>>r;
            cout<<maks(1, 1, n, l, r)<<' '<<sum(1, 1, n, l, r)<<endl;
        }
            
    }
    return 0;
}