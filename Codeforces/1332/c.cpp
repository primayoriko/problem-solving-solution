#include <bits/stdc++.h>
using namespace std;

int solve(){
    string s;
    int n,k, res=0;
    cin>>n>>k>>s;
    for(int i=0;i<k;i++){
        int cnt[26];
        memset(cnt, 0, sizeof(cnt));
        for(int j=i;j<n;){
            cnt[s[j]-'a']++;
            cnt[s[n-1-j]-'a']++;
            j+=k;
        }
        int maks = cnt[0];
        char y = 'a';
        for(int m=1;m<26;m++){
            if(maks<cnt[m]){
                maks=cnt[m];
                y=m+97;
            }
        }
        for(int j=i;j<n;){
            if(s[j]!=y){
                s[j]=y;
                res++;
            }
            if(s[n-1-j]!=y){
                s[n-1-j]=y;
                res++;
            }
            j+=k;
        }
    }
    cout<<res<<endl;
    //cout<<s<<endl;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}   