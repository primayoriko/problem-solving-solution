#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5+5;
long long tree[4*MAX], treeMax[4*MAX], lazy[4*MAX], lazyMax[4*MAX];

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

long long sum(int v, int tl, int tr, int l, int r){
    if(lazy[v]!=0){
        tree[v] += (tr-tl+1)*lazy[v];
        if(tr!=tl){
            lazy[v*2] += lazy[v];
            lazy[v*2 + 1] += lazy[v];
        }
        lazy[v] = 0;
    }

    if(l>tr || r<tl || tr<tl)
        return 0;
    else if(l<=tl && r>=tr)
        return tree[v];
    else{
        int tm = (tl + tr)/2;
        return sum(v*2, tl, tm, l, r)+ sum(v*2+1, tm+1, tr, l, r);
    }
}

void update(int v, int tl, int tr, int us, int ue, int diff){
    if(lazy[v]!=0){
        tree[v] += (tr-tl+1) * lazy[v];
        if(tr!=tl){
            lazy[v*2] +=lazy[v];
            lazy[v*2+ 1] +=lazy[v];
        }
        lazy[v] = 0;
    }

    if(tl>tr || tl>ue || tr<us)
        return;

    if(tl>=us && tr<=ue){
        tree[v] += (tr-tl+1)*diff;
        if(tr!=tl){
            lazy[v*2] += diff;
            lazy[v*2+ 1] += diff;
        }
        return;
    }

    int tm = (tr+tl)/2;
    update(v*2, tl, tm, us, ue, diff);
    update(v*2+1, tm+1, tr, us, ue, diff);

    tree[v] = tree[v*2] + tree[v*2 + 1];
}

long long maks(int v, int tl, int tr, int l, int r){
    if(lazyMax[v]!=0){
        treeMax[v] = treeMax[v] + lazyMax[v];
        if(tr!=tl){
            lazyMax[v*2] += lazyMax[v];
            lazyMax[v*2 + 1] += lazyMax[v];
        }
        lazyMax[v] = 0;
    }

    if(l>tr || r<tl || tr<tl)
        return 0;
    else if(l<=tl && r>=tr)
        return treeMax[v];
    else{
        int tm = (tl + tr)/2;
        return max(maks(v*2, tl, tm, l, r), maks(v*2+1, tm+1, tr, l, r));
    }
}

void updateMaks(int v, int tl, int tr, int us, int ue, int diff){
    if(lazyMax[v]!=0){
        treeMax[v] = treeMax[v] + lazyMax[v];
        if(tr!=tl){
            lazyMax[v*2] +=lazyMax[v];
            lazyMax[v*2+ 1] +=lazyMax[v];
        }
        lazyMax[v] = 0;
    }

    if(tl>tr || tl>ue || tr<us)
        return;

    if(tl>=us && tr<=ue){
        treeMax[v] += treeMax[v] + diff;
        if(tr!=tl){
            lazyMax[v*2] += diff;
            lazyMax[v*2+ 1] += diff;
        }
        return;
    }

    int tm = (tr+tl)/2;
    update(v*2, tl, tm, us, ue, diff);
    update(v*2+1, tm+1, tr, us, ue, diff);

    treeMax[v] = max(treeMax[v*2], treeMax[v*2 + 1]);
}

int main(){
    int n, q;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    build(arr, 1, 1, n);
    cin>>q;
    for(int i=0;i<q;i++){
        int a, l, r;
        for(int j=1;j<=10;j++){
            cout<<j<<' '<<tree[j]<<endl;
        }
        cout<<"===="<<endl;
        for(int j=1;j<=10;j++){
            cout<<j<<' '<<lazy[j]<<endl;
        }
        cin>>a>>l>>r;
        if(a==1){
            update(1, 1, n, l, r, 1);
            updateMaks(1, 1, n, l, r, 1);
        }
        else{
            cout<<maks(1, 1, n, l, r)<<' '<<sum(1, 1, n, l, r)<<endl;
        }
            
    }
    return 0;
}