#include <bits/stdc++.h>
using namespace std;

vector<int> diff;

// int binser(int * arr, int i, int n){
//     int mid = (n-1)/2;
//     while(l<=r){

//     }
// }

int main(){
    int n;
    cin>>n;
    int tch[n], stdn[n];
    diff.resize(n);
    for(int i=0;i<n;i++)
        cin>>diff[i];
    //     cin>>tch[i];
    // for(int i=0;i<n;i++)
    //     cin>>stdn[i];
    // for(int i=0;i<n;i++)
    //     diff[i] = tch[i]- stdn[i];
    sort(diff.begin(), diff.end());
    // for(int i=0;i<n;i++)
    //     cout<<diff[i]<<' ';
    // cout<<endl;
    long sum(0);
    for(int i=0;i<n;i++){
        auto x = lower_bound(diff.begin(), diff.end(), -diff[i]+1);
        cout<<diff[i]<<' '<<(x-diff.begin())<<endl;
        if(*x + diff[i]>0)
            sum+=(n-(x-diff.begin()));
        if(-diff[i]+1 < diff[i])
            sum--;
    }
    cout<<sum/2<<endl;

    return 0;
}