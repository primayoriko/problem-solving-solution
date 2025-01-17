#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+8;
int bit[MAX];

struct Query{
    int l, r, x ,idx;
};
struct ArrElmt{
    int val, idx;
};

bool cmpQuery(Query q1, Query q2){
    return q1.x < q2.x;
}

bool cmpElmt(ArrElmt e1, ArrElmt e2){
    return e1.idx < e2.val;
}

void update(int idx, int val, int n){
    for(;idx<=n;idx+=idx&-idx)
        bit[idx] +=val;
}

int query(int idx){
    int sum=0;
    for(; idx>0; idx-= idx & -idx)
        sum+= bit[idx];
    return sum;
}

void ansQuery(ArrElmt arr[], int n, Query queries[], int q){
    //memset(bit, 0, sizeof(bit));
    sort(arr, arr+n, cmpElmt);
    sort(queries, queries+q, cmpQuery);

    int curr=0;
    int ans[q];

    for(int i=0;i<q;i++){
        while(arr[curr].val<=queries[i].x && curr<n){
            update(arr[curr].idx+1,1,n);
            curr++;
        }
        ans[queries[i].idx] = query(queries[i].r+1) - query(queries[i].l);
    }
    
    for(int i =0;i<q;i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    ArrElmt arr[n];
    Query queries[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].val;
        arr[i].idx = i;
        queries[i].l = 0;
        queries[i].r = i-1;
        queries[i].x = arr[i].val;
        queries[i].idx = i;
    }

    ansQuery(arr, n, queries, n);
    
    return 0;
}