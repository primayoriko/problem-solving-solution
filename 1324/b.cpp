#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]==arr[i+1]){
            cout<<"YES"<<endl;
            return;
        }
        if(i<n-2){
            if(arr[i]==arr[i+1] && arr[i-1]==arr[i+2]){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}