#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int cnt = (s[0] - '1') * 10;
    int cur = 1;
    if(s.length() == 4){
        cur = 10;
    } else if(s.length() == 3){
        cur = 6;
    } else if(s.length() == 2){
        cur = 3;
    } 
    cout<<cnt + cur<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}