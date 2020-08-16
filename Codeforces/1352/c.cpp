#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k;
    cin>>n>>k;
    long long m = n - 1;
    long long part = k/m;
    long long res = k + part;
    if(k % m == 0) res--;

    cout<<res<<endl;
}

int main(){
    long long t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}