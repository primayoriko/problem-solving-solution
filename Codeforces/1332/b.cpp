#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    // if(n<=11){
    //     cout<<n<<endl;
    //     for(int i=1;i<=n;i++){
    //         cout<<i<<' ';
    //     }
    //     cout<<endl;
    // }
    // else{
    bool a[11];
    memset(a, false, sizeof(a));
    int arr[n], res[n], group[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        for(int j=0;j<11;j++){
            if(arr[i]%group[j]==0){
                arr[i] = j;
                a[j] = true;
                break;
            }
        }
    }
    int cnt =0;
    for(int i=0;i<11;i++){
        if(a[i]){
            cnt++;
            res[i] = cnt;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;i++){
        cout<<res[arr[i]]<<' ';
    }
    cout<<endl;
    //}
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}   