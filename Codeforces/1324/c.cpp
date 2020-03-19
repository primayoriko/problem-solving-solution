#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int cnt(0), maks(0);
    for(int i=0;i<s.length();i++){
        if(s[i]=='L')
            cnt++;
        else{
            maks = max(maks, cnt);
            cnt=0;
        }
    }
    maks = max(maks, cnt);
    cout<<maks+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}