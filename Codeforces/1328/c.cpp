#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s, a , b;
        cin>>n>>s;
        bool inequal = false;
        a+="1";
        b+="1";
        for(int i=1;i<n;i++){
            if(s[i]=='0'){
                a+="0";
                b+="0";
            }
            else if(!inequal){
                if(s[i]=='1'){
                    inequal = true;
                    a+="1";
                    b+="0";
                }
                if(s[i]=='2'){
                    a+="1";
                    b+="1";
                }
            }
            else{
                if(s[i]=='1'){
                    a+="0";
                    b+="1";
                }
                if(s[i]=='2'){
                    a+="0";
                    b+="2";
                }
            }
            
        }
        cout<<a<<'\n'<<b<<'\n';
    }
    return 0;
}