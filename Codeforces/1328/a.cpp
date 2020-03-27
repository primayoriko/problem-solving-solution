#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a, b;

    cin>>a>>b;
    int n =(a%b==0)? a/b: a/b+1;
    cout<<n*b - a<<endl;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}