#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n + 1];
    map<int, int> m;
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
        m[arr[i]]++;
    }

    for(auto i = m.begin(); i != m.end(); i++){
        if(i->second == n){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;

    int i;
    for(i = 2; i <= n; i++){
        if(arr[1] != arr[i]){
            cout<<1<<' '<<i<<endl;
            break;
        }
    }

    for(int j = 2; j <= n; j++){
        if(i == j)
            continue;

        if(arr[j] != arr[1]){
            cout<<1<<' '<<j<<endl;
        } else {
            cout<<i<<' '<<j<<endl;
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