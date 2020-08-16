#include <bits/stdc++.h>
using namespace std;

void solve(){
    map<int, int> val;
    map<int, bool> vis;
    int n, sum = 0;
    cin>>n;
    int arr[n + 1], pref[n + 1];//, sortedArr[n];
    for(int i = 1; i <= n ; i++){
        cin>>arr[i];
        val[arr[i]]++;
        vis[arr[i]] = false;
    }

    pref[0] = 0;
    for(int i = 1; i <= n; i++)
        pref[i] = arr[i] + pref[i - 1];

    for(int i = 2; i <= n; i++){
        for(int j = 0; j < i - 1; j++){
            int res = pref[i] - pref[j];
            if(!vis[res]){
                sum += val[res];
                vis[res] = true;
            }
        }
    }

    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}