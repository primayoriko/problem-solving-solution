#include <bits/stdc++.h>
using namespace std;

const int MOD  = 1e9+7;

int main(){
    int n, q;
    cin>>n>>q;
    int arr[(int)1e5+1];
    arr[2] = 2, arr[1] = 1;
    for(int i=3;i<=n;i++){
        arr[i] = (((arr[i-1]%MOD) + (arr[i-2]%MOD))+MOD)%MOD;
        cout<<arr[i]<<endl;
    }
    // for(int i=0;i<q;i++){
    //     int a;
    //     cin>>a;
    //     cout<<arr[a]<<endl;
    // }
    return 0;
}