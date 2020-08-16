#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n){
    return n % 2 == 1;
}

void solve(){
    int n, k;
    cin>>n>>k;
    if(n < k){
        cout<<"NO"<<endl;
        return;
    }

    if(isOdd(n)){
        if(isOdd(k)){
            cout<<"YES"<<endl;
            for(int i = 0; i <  k - 1; i++){
                cout<<1<<" ";
            }
            cout<<n - k + 1<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    } else {
        if(isOdd(k)){
            if(n >= 2 * k){
                cout<<"YES"<<endl;
                for(int i = 0; i <  k - 1; i++){
                    cout<<2<<" ";
                }
                cout<<n - 2*(k - 1)<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        } else {
            cout<<"YES"<<endl;
            for(int i = 0; i <  k - 1; i++){
                cout<<1<<" ";
            }
            cout<<n - k + 1<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}