#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ev =0, od =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0)
            ev++; 
        else
        {
            od++;
        }
    }
    if(ev!=0 && od!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}