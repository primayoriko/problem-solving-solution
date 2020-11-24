#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n == 1){
        cout<< 1 << endl;
        return;
    }

    int arr[n + 2];
    for(int i = 1; i<= n; i++){
        cin>>arr[i];
    }
    arr[0] = 1e9 + 7;
    arr[n + 1] = 1e9 + 7;
    int maks = arr[1];
    for (int i = 2; i <= n; i++){
        maks = max(maks, arr[i]);
    }

    for(int i = 1; i<= n; i++){
        if(arr[i] == maks){
            if(arr[i - 1] < maks || arr[i + 1] < maks){
                cout<<i<<endl;
                return;
            }
        }
    }

    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}