#include <bits/stdc++.h>
using namespace std;

const string pat = "abacaba";
const int N = 7;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    int cnt = 0;
    for(int i = 0; i <= n - N; i++){
        bool flg = true;
        for(int j = 0; j < N && flg; j++){
            flg = s[i + j] == pat[j];
        }
        if(flg) cnt++;
    }
    if(cnt <= 1){
        for(int i = 0; i <= n - N; i++){
            bool flg = true, flg2 = false;
            for(int j = 0; j < N && flg; j++){
                flg = s[i + j] == '?' ||
                    s[i + j] == pat[j];
                if(s[i + j] == '?'){
                    flg2 = true;
                    if(cnt < 1)
                        s[i + j] = pat[j]; 
                    else{
                        s[i + j] = 'z';
                        flg = false;
                    }
                } 
            }
            if(flg && flg2) cnt++;
            if(cnt > 1) break;
        }
    }

    for(int i = 0; i < n ; i++){
        if(s[i] == '?')
            s[i] = 'z'; 
    }

    cnt = 0;
    for(int i = 0; i <= n - N; i++){
        bool flg = true;
        for(int j = 0; j < N && flg; j++){
            flg = s[i + j] == pat[j];
        }
        if(flg) cnt++;
    }
    //cout<<"---"<<cnt<<endl;
    if(cnt != 1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl<<s<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}