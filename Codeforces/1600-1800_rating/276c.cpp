#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    int arr2[n], cnt[n+1];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
        cnt[i] = 0;
    }
    //sort(arr2, arr2+n);
    for(int i=0;i<q;i++){
        int a, b;
        cin>>a>>b;
        cnt[a]++;
        cnt[b+1]--;
    }
    // for(int i=1;i<n;i++){
    //     cnt[i]+=cnt[i-1];
    // }
    // long sum(0);
    // //sort(cnt, cnt+n);
    // for(int i=0;i<n;i++)
    //     sum+=cnt[i]*arr2[i];
    // cout<<"---"<<endl;
    for(int i=0;i<n+1;i++){
        cout<<arr2[i];//<<' '<<cnt[i]<<endl;
    }
    //cout<<sum<<endl;
    return 0;
}