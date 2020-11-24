#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i< n; i++){
        if(arr[i]){
            int cnt =0;
            for(int j = i + 1; j<n;j++){
                if(!arr[j]){
                    cnt++;
                }
                if(arr[j]){
                    sum += cnt;
                    cnt = 0;
                }
            }
            break;
        }
    }

    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}